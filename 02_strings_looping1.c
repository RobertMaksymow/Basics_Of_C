#include<stdio.h>
#include<string.h>

int main() {
  char str[] = "Hello World";

  for(int i = 0; i < strlen(str); i++) { // Using strlen instead of hard coding the string length
    printf("%c", str[i]);
  }

    char s[] = "This message will be hidden";
  char p[] = "poolloop";  
  for(int i = 0; i < strlen(s); i++) { 
    s[i] = '*';
  }
  printf("%s\n", s);

  for(int i = 0; i < strlen(p)/2; i++) {  // Loop through half of the string length
    p[i] = '#';
  }
  printf("%s", p);
}
