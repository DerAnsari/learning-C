#include <stdio.h>

enum Day {
  SUNDAY = 1,
  MONDAY = 2,
  TUESDAY = 3,
  WEDNESDAY = 4,
  THURSDAY = 5,
  FRIDAY = 6,
  SATURDAY = 7
};

int main() {
  enum Day today = THURSDAY;

  printf("%d", today);

  return 0;
}