#include<stdio.h>
#include<string.h> // Don't forget to include this!

int main() {
  char s1[9] = "abcd"; // Allocate enough space for "abcdefgh" + '\0'
  char s2[] = "efgh";

  strcat(s1, s2); // Concatenate s2 to s1
  printf("%s\n", s1); // Output will be "abcdefgh"

  char s3[14] = "London";
  char s4[] = " Bridge";

  char n[20] = "New";
  char y[] = " York";
  char c[] = " City";

  strcat(s3, s4);
  printf("%s\n", s3); //"London Bridge"
 
  strcat(n, y);
  strcat(n, c);
  printf("%s\n", n); //"New York City"

  return 0;
}
