#include <stdio.h>

int main() {

  int grade1 = 59;
  int grade2 = 90;

  if (grade1 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

    if (grade2 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  int grade = 10;

  if (grade == 9) {
  printf("Freshman\n");
} else if (grade == 10) {
  printf("Sophomore\n");
} else if (grade == 11) {
  printf("Junior\n");
} else if (grade == 12) {
  printf("Senior\n");
} else {
  printf("Super Senior\n");
}


}