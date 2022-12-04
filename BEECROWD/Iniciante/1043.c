#include <stdio.h>

int main(void) {
  double A = 0, B = 0, C = 0;
  double Area = 0, Perimetro = 0;

  scanf("%lf%lf%lf", &A, &B, &C);

  if (A < (C + B)) {
    if (B < (A + C)) {
      if (C < (A + B)) {
        Perimetro = A + B + C;
        printf("Perimetro = %.1f\n", Perimetro);
      }  
    }
  }
  else {
    Area = ((A + B) * C) / (double) 2;
    printf("Area = %.1f\n", Area);
  }

  return 0;
}
