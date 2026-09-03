#include <stdio.h>

int main() {

  int i = 0;
  int j = 9;
  int square = 0;

  while(i < 10){
    square = i * i;
    printf("%d \t %d\n", i, square);
    i++;
  }
 printf("\n");

    while(j < 10 && j > -1){
    square = j * j;
    printf("%d \t %d\n", j, square);
    j--;
  }
}