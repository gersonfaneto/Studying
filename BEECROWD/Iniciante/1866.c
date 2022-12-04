#include <stdio.h>

int main(){

  int qntOper, anyNum, qntNums;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d", &qntNums);

    for (int j = 1; j <= qntNums; j++) {
      if (j % 2 == 0) {
        anyNum--;
      } else {
        anyNum++;
      }
    }

    printf("%d\n", anyNum);
    anyNum = 0;
  }

  return 0;
}
