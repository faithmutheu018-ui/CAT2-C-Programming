/*
Name:Faith Mutheu
Reg No:CT101/G/26461/25
Description:files 
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Function prototypes
void writeInputFile();
void processFile();
void displayFiles();

int main() {
    writeInputFile();  // Step 1: Create input.txt
    processFile();     // Step 2: Read input.txt, calculate sum & average, write to output.txt
    displayFiles();    // Step 3: Display both files

    return 0;
}

// Function to prompt user for 10 integers and store them in input.txt
void writeInputFile() {
    FILE *fp;
    int numbers[SIZE];

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        perror("Error opening input.txt for writing");
        exit(1);
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d ", numbers[i]);
    }

    fclose(fp);
    printf("\nData successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processFile() {
    FILE *fpIn, *fpOut;
    int num, count = 0, sum = 0;
    float average;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while (fscanf(fpIn, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fpIn);

    if (count == 0) {
        printf("No numbers found in input.txt.\n");
        exit(1);
    }

    average = (float)sum / count;

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        perror("Error opening output.txt for writing");
        exit(1);
    }

    fprintf(fpOut, "Sum: %d\nAverage: %.2f\n", sum, average);
    fclose(fpOut);

    printf("Results successfully written to output.txt\n\n");
}

// Function to display contents of input.txt and output.txt
void displayFiles() {
    FILE *fp;
    char ch;

    printf("Contents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Error opening output.txt for reading");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n");
}