#include<stdio.h>

int main() {
  char comp[] = {'C','o','m','p','u','t','e','r','\0'};
  char compCode[] = "Computer Code";
  
printf("%s\n", comp);
printf("%s", compCode);

char str[] = "Hello Yorld";
printf("%s\n", str); // This will print Hello Yorld to the screen

str[6] = 'W'; // Replace 'Y' with 'W' - single quotes are used for characters
printf("%s\n", str); // This will print Hello World to the screen

  char p[] = "procezzor";
  printf("%c\n", p[2]);
  p[5] = 's'; // needs to be single quote - how stupid
  p[6] = 's';
  printf("%s\n", p);
}