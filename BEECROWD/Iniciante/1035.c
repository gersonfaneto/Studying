#include <stdio.h>

int main(void) {
  int A = 0, B = 0, C = 0, D = 0;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  if (B > C && D > A) {
    if ((C + D) > (B + A)) {
      if (C >= 0 && D >=0) {
        if (A % 2 == 0) {
          printf("Valores aceitos\n");
        }
      }
    }
  }
  else {
    printf("Valores nao aceitos\n");
  }

  return 0;
}
