#include <stdio.h>
void BIRTHDAY(int *age);

int main() {
  int age = 18;
  int *agePtr = &age;
  char name[6] = "DANIEL";

  BIRTHDAY(agePtr);

  printf("HAPPY BIRTHDAY %s, YOU ARE NOW %d YEARS OLD", name, age);
}

void BIRTHDAY(int *age) { (*age)++; }