#include <stdio.h>

int main(){

  int firstNum, secondNum, finalResult;

  scanf("%d", &firstNum);
  scanf("%d", &secondNum);

  if (firstNum < secondNum) {
    for (int i = firstNum; i <= secondNum; i++) {
      if (i % 13 != 0) {
        finalResult += i;
      }
    }
  } else {
    for (int i = secondNum; i <= firstNum; i++) {
      if (i % 13 != 0) {
        finalResult += i;
      }
    }
  }

  printf("%d\n", finalResult);

  return 0;
}
