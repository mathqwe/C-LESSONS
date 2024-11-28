#include <stdio.h>

int main () {
  int r = 1;
  double area;

  for (r; r <= 10; r++) {
    if((r % 2) != 0) {
      continue;
    }
    area = 3.14 * (r * r);

    printf("Raio = %d | Area = %.1lf\n", r, area);
  }
  return 0;
}