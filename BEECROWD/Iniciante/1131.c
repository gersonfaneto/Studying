#include <stdio.h>

int main(){

  int vitGremio, vitInter, golsGremio, golsInter;
  int qntEmpates, qntGrenais, novoGrenal = 1;

  while (novoGrenal == 1) {
    qntGrenais += 1;

    scanf("%d %d", &golsInter, &golsGremio);
    if (golsInter > golsGremio) {
      vitInter += 1;
    } else if (golsGremio > golsInter) {
      vitGremio += 1;
    } else {
      qntEmpates += 1;
    }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &novoGrenal);
  }

  printf("%d grenais\n", qntGrenais);
  printf("Inter:%d\n", vitInter);
  printf("Gremio:%d\n", vitGremio);
  printf("Empates:%d\n", qntEmpates);
  (vitInter > vitGremio) ? printf("Inter venceu mais\n") : (vitGremio > vitInter) ? printf("Gremio venceu mais\n") : printf("Nao houve vencedor\n");

  return 0;
}
