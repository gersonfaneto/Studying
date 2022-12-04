#include <stdio.h>

int main(void) {
  int firstD = 0, secondD = 0;
  double finalScore = 0;
  int newOper = 0;

  while (newOper != 2) {
    while (firstD < 0 || firstD > 10) {
      scanf("%d", &firstD);
      if (firstD < 0 || firstD > 10) {
        printf("nota invalida\n");
      }
    }
    while (secondD < 0 || secondD> 10) {
      scanf("%d", &secondD);
      if (secondD < 0 || secondD > 10) {
        printf("nota invalida\n");
      }
    }
    printf("media = %.2f\n", (firstD + secondD) / (float) 2);
    while (newOper != 1 || newOper != 2 ) {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &newOper);
    }
  }

  return 0;
}
