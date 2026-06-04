#include <stdio.h>
#include <stdlib.h>

int main() {
  int num = 0;
  printf("How many prices?: ");
  scanf("%d", &num);

  float *prices = malloc(num * sizeof(float));

  for (int i = 0; i < num; i++) {
    printf("Enter price number: %d ", i + 1);
    scanf("%f", &prices[i]);
  }

  int newNum = 0;
  printf("enter new number: ");
  scanf("%d", &newNum);

  float *temp = realloc(prices, newNum * sizeof(float));
  if (temp == NULL)
    return -1;
  else {
    prices = temp;
    temp = NULL;

    for (int i = num; i < newNum; i++) {
      printf("Enter price number: %d ", i + 1);
      scanf("%f", &prices[i]);
    }

    for (int i = 0; i < num; i++) {
      printf("%.2f \n", prices[i]);
    }
  }

  if (prices == NULL)
    return -1;

  free(prices);
  prices = NULL;
  return 0;
}