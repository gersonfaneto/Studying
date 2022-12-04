
#include <stdio.h>

int main(){

  int qntOper = 0;
  float sqrtTen = 6.0;

  scanf("%d", &qntOper);

  if (qntOper == 0) {
    printf("%.10f\n", 3.0);
  }
  else {
    for (int i = 0; i < qntOper; i++) {
      sqrtTen = 3 + 1.0 / sqrtTen;
    }
    printf("%.10f\n", sqrtTen);
  }

  return 0;
}
