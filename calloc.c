#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;
  printf("Enter the num of players: ");
  scanf("%d", &number);
  int *scores = calloc(number, sizeof(int));

  if (scores == NULL)
    return -1;

  for (int i = 0; i < number; i++) {
    printf("Enter scored #%d", i + 1);
    scanf("%d", &scores[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("%d \n", scores[i]);
  }

  free(scores);
  return 0;
}