#include <stdio.h> // Include the standard input-output library for using printf function

/*
To compile this code, use the following command in the terminal:
 - gcc 01_Variables.c -o 01_Variables
 - ./01_Variables to run the compiled program.
*/

int main() {
 
 int studentRank = 1;
 float studentFeeTotal = 100.56;
 char studentGradeLetter = 'A';

 printf("Student's Rank in class: %dst\n", studentRank); // %d is a placeholder for an integer value
 printf("Student's Total Fees: $%3.2f\n", studentFeeTotal); // %3.2f is a placeholder for a floating-point value with 3 digits before the decimal and 2 digits after the decimal
 printf("Student's Grade: %c\n", studentGradeLetter); // %c is a placeholder for a character value



  printf("Hello World!\n");
  printf("2 Cups: All Purpose Flour\n"); //\n is a newline character that moves the cursor to the next line
  printf("1 Cups: Unsalted Butter\t(Room Temperature)\n"); // \t is a tab character that adds horizontal spacing
  printf("2/3 Cups: Granulated Sugar\n");




  return 0;
}
