#include <stdio.h>

int main(){

  int quantNotas = 0;
  float notaParcial, mediaFinal;

  while (quantNotas != 2) {
    scanf("%f", &notaParcial);
    if (notaParcial >= 0 && notaParcial <= 10) {
      mediaFinal += notaParcial;
      quantNotas += 1;
    } else {
      printf("nota invalida\n");
    }
  }

  mediaFinal /= quantNotas;
  printf("media = %.2f\n", mediaFinal);

  return 0;
}
