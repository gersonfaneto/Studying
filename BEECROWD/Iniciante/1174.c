#include <stdio.h>

int main(void) {
  double DataBase[100];

  for (int i = 0; i < 100; i++) {
    scanf("%lf", &DataBase[i]);
  }

  for (int i = 0; i < 100; i++) {
    if (DataBase[i] >= 0) {
      printf("A[%d] = %.1f\n", i, DataBase[i]);
    }
  }

  return 0;
}

