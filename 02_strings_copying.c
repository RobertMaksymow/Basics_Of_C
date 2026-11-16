#include<stdio.h>
#include<string.h>

int main() {
  
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan) + 1; // Checkpoint 2 + 1 for the null terminator
  char dst2[len];
  
  // Code for checkpoint 1 goes here
  strcpy(dst, src);
  printf("%s\n", dst);  // banana
  
  // Code for checkpoint 3 goes here
  strcpy(dst2, pan);
  printf("%s", dst2); // How vexingly....
}
