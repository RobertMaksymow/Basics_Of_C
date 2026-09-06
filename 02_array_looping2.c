#include<stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Looping through array
    int i = 0;
    while(i < 20){
      printf("%i\n", arr[i]);
      i++;
    }
  // Adding elements to an array using a loop
  for(i=0; i < 100; i++){
    arr2[i] = 4 + i;
    printf("%i\n", arr2[i]);
  }
}