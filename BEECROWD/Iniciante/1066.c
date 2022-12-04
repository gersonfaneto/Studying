#include <stdio.h>

int main(){

  int anyNum, quantPar, quantImp;
  int quantPos, quantNeg;

  for (int i = 0; i < 5; i++) {
    
    scanf("%d", &anyNum);

    if (anyNum % 2 == 0) {
      quantPar += 1;
    } else if (anyNum % 2 != 0) {
      quantImp += 1;
    }

    if (anyNum > 0) {
      quantPos += 1;
    } else if (anyNum < 0) {
      quantNeg += 1;
    }

  }

  printf("%d valor(es) par(es)\n", quantPar);
  printf("%d valor(es) impar(es)\n", quantImp);
  printf("%d valor(es) positivo(s)\n", quantPos);
  printf("%d valor(es) negativo(s)\n", quantNeg);

  return 0;
}
