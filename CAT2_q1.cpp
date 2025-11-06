/*
Name:Faith Mutheu Munyao
Reg No:CT101/G/26461/25
Description:arrays
*/
#include <stdio.h>
//1.define an array data structure
  //An array is a collecction of elements of the same data type stored in
  //contiguous memory location and accessed using a common name and an idex
  
  //2.declare and initialize a 2D array named score with 2raws and 4 columms 
      //using the given value
	  //|row1|65|92|35|70||row2|84|72|59|67|
	  int scores[2] [4]={{65,92,35,70},
	                     {67,59,72,84}
	  };

int main() {
    // (ii) Declare and initialize a 2D array named scores
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // (iii) Print elements of the array using nested loops
    printf("Elements of the array are:\n");
    for(int i = 0; i < 2; i++) {          // Loop through rows
        for(int j = 0; j < 4; j++) {      // Loop through columns
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}