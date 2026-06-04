#include <stdio.h>
#include <string.h>

int main() {
  char item[30] = "";
  float price = 0.0f;
  int qtty = 0;

  printf("What item would you like to buy?: ");
  fgets(item, sizeof(item), stdin);

  item[strlen(item) - 1] = '\0';

  printf("What price would you like to pay for this: ");
  scanf("%f", &price);

  printf("How many items would you like to buy?: ");
  scanf(" %d", &qtty);

  printf("You have bought %d %s's \n", qtty, item);

  float total = price * qtty;
  printf("Your total is: %.2f", total);

  return 0;
}
