#include <iostream>

using namespace std;

int main(void) {
  double finalResult = 0, newNum = 0;
  char operType = ' ';
  int limitUp = 10, limitDown = 1;

  cin >> operType;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> newNum;
      if (i <= 4 && j <= limitUp && j >= limitDown) {
        finalResult += newNum;
      }
    }
    limitDown++, limitUp--;
  }

  (operType == 'S') ? printf("%.1f\n", finalResult) : printf("%.1f\n", (finalResult / 30));

  return 0;
}
