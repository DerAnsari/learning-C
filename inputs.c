#include <stdio.h>

int main() {
  int age = 0;
  float gpa = 0;
  char grade = '\0';
  char name[30] = "";

  printf("Enter your name: ");
  scanf("%d", &age);

  printf("%d\n", age);

  printf("Enter first name ");
  scanf("%s \n", name);

  getchar();
  printf("enter your full name: ");
  fgets(name, sizeof(name), stdin);

  return 0;
}