#include <stdio.h>

int main(){

  int combEscolhido, totalGas, totalDis, totalAlcool;

  while (combEscolhido != 4) {
    scanf("%d", &combEscolhido);

    switch (combEscolhido) {
      case 1:
        totalAlcool += 1;
        break;
      case 2:
        totalGas += 1;
        break;
      case 3:
        totalDis += 1;
        break;
      default:
        break;
    }
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", totalAlcool);
  printf("Gasolina: %d\n", totalGas);
  printf("Diesel: %d\n", totalDis);

  return 0;
}
