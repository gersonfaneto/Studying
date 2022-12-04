#include <stdio.h>

int main(void) {
  char* empName;
  double totalSales = 0, baseIn = 0, finalIn = 0;

  scanf("%s%lf%lf", empName, &baseIn, &totalSales);

  finalIn = baseIn + (totalSales * 0.15);

  printf("TOTAL = R$ %.2f\n", finalIn);

  return 0;
}
