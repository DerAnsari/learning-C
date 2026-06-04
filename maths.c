#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float x = 3.14;

  x = sqrt(x);
  x = pow(x, 4);
  x = round(x);
  x = ceil(x);
  x = floor(x);
  int y = abs(-2);
  x = log(x);
  x = cos(x);
  x = tan(x);

  printf("%f", x);
  return 0;
}