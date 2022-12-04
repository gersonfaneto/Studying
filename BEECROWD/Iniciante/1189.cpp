#include <iostream>

using namespace std;

int main(void) {
  double finalResult = 0, newNum = 0;
  char operType = ' ';

  cin >> operType;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> newNum;
      if (j == 0 && (i > 0 && i < 11)) {
        finalResult += newNum;
      } else if (j == 1 && (i > 1 && i < 10)) {
        finalResult += newNum;
      } else if (j == 2 && (i > 2 && i < 9)) {
        finalResult += newNum;
      } else if (j == 3 && (i > 3 && i < 8)) {
        finalResult += newNum;
      } else if (j == 4 && (i > 4 && i < 7)) {
        finalResult += newNum;
      }
    }
  }

  (operType == 'S') ? printf("%.1f\n", finalResult) : printf("%.1f\n", (finalResult / 30));

  return 0;
}
