#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;
  printf("ENTER THE NUMBER OF GRADES: ");
  scanf("%d", &number);

  // dynamic array using malloc in C
  char *grades = malloc(number * sizeof(char));

  if (grades == NULL) {
    printf("MEM ALLOC FAILED;\n");
    return -1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter grade #%d", i + 1);
    scanf(" %c", &grades[i]);
  }
  for (int i = 0; i < number; i++) {
    printf("grade #%d is: %c \n", i + 1, grades[i]);
  }

  free(grades);
  grades = NULL; // to not have dangling Ptr
  return 0;
}