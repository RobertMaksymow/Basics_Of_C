#include <stdio.h>

int main() {

  int i = 0;

  while (i < 10) {
    if(i == 5){
      printf("Inside if with i = 5");
      i++; // Increment i before continue to avoid infinite loop, because i is always 5 in this case
      continue; // Skip number 5 and continue to the next iteration
    }
    printf("%d\n", i);
    i++;
  }

  for(i =0; i < 10; i++){
     if(i == 5){
      printf("Inside if with i = 5");
      continue; // Skip number 5 and continue to the next iteration
    }
    printf("%d\n", i);
  }
}