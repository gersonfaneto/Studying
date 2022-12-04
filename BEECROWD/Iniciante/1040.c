#include <stdio.h>

int main(void) {
  double FiGrade = 0, SGrade = 0, TGrade = 0,
         FoGrade = 0;
  double FinalGrade = 0;

  scanf("%lf%lf%lf%lf", &FiGrade, &SGrade, &TGrade, &FoGrade);

  double Average = ((FiGrade * 2) + (SGrade * 3) + (TGrade * 4) + (FoGrade * 1)) / (double) 10;

  printf("Media: %.1f\n", Average);
  if (Average >= 7) {
    printf("Aluno aprovado\n");  
  }
  else if (Average < 5) {
    printf("Aluno reprovado\n");
  }
  else {
    printf("Aluno em exame.\n");
    
    scanf("%lf", &FinalGrade);
    printf("Nota do exame: %.1f\n", FinalGrade);
    Average += FinalGrade;
    Average /= 3;
    (Average >= 5) ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");

    printf("Media final: %.1f\n", Average);
  }

  return 0;
}
