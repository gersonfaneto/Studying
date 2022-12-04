#include <stdio.h>

int main(void) {
  int qntCases = 0;
  int isGood = 0;
  int inNum = 0;

  scanf("%d", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%d", &inNum);
    for (int j = 2; j < inNum; j++) {
      if (inNum % j == 0) {
        isGood = 0;
        break;
      }
      else {
        isGood = 1;
      }
    }
    (isGood) ? printf("%d eh primo\n", inNum) : printf("%d nao eh primo\n", inNum);
  }

  return 0;
}
