#include <stdio.h>

int main(){

  int anyAge, quantAges;
  float ageAverage = 0;

  scanf("%d", &anyAge);

  while (anyAge >= 0) {
    ageAverage += anyAge;
    quantAges += 1;
    scanf("%d", &anyAge);
  }

  if (quantAges > 0) {
    ageAverage /= quantAges;
  }
  
  printf("%.2f\n", ageAverage);

  return 0;
}
