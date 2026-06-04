#include <stdio.h>

int main() {
  int age = 18;

  if (age > 10)
    age++;
  else if (age < 10)
    age--;
  ;

  int dawWeek = 1;
  switch (dawWeek) {
  case 1:
    printf("Monday");
    break;

  case 2:
    printf("Tuesday");
    break;

  default:
    printf("not Mon or Tue");
  }
}