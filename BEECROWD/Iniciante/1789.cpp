#include <cstdio>

int main(void) {
  int inSpeed = 0;
  int qntSnails = 0;
  int fastestSnail = 0;

  while (scanf("%d", &qntSnails) != EOF) {
    fastestSnail = 0;
    for (int i = 0; i < qntSnails; i++) {
      scanf("%d", &inSpeed);
      if (inSpeed > fastestSnail) {
        fastestSnail = inSpeed;
      }
    }
    if (fastestSnail < 10) {
      printf("1\n");
    }
    else if (fastestSnail < 20) {
      printf("2\n");
    }
    else {
      printf("3\n");
    }
  }

  return 0;
}
