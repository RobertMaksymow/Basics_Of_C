#include<stdio.h>

int main() {
  int arr1[] = {6, 9, 18, 37, 4, 23, 27, 16}; // Array
  int i = 0; // Initialize index i to zero

  while(i < 8){ // while loop
    printf("While loop: %i\n", arr1[i]); // Access element at index i in arr1 and print
    i++; // Increment the index
  }


  int arr2[] = {1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28}; // Array
  for(int i = 0; i < 12; i++){ // for loop
    printf("For loop: %i\n", arr2[i]); // Access element at index i in arr2 and print
  }
}

