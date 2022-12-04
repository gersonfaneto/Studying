#include <math.h>
#include <stdio.h>

int main() {

  float anyNum = 0;
  float minValue = 0.0, maxValue = 0.0;

  scanf("%f", &anyNum);

  minValue = anyNum / log(anyNum);
  maxValue = 1.25506 * minValue;

  printf("%.1f %.1f\n", minValue, maxValue);

  return 0;
}
