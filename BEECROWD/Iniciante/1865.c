#include <stdio.h>
#include <string.h>

int main(){

  int qntOper, anyNum;
  char heroName[50];

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {

    scanf("%s %d", heroName, &anyNum);
    
    if (strcmp(heroName, "Thor")) {
      printf("N\n");
    } else {
      printf("Y\n");
    }
  }

  return 0;
}
