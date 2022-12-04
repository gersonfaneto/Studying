#include <iostream>

using namespace std;

int main(void) {
  double finalResult = 0, newNum = 0;
  char operType = ' ';
  int limitOper = 11;

  cin >> operType;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> newNum;
      if (j > limitOper) {
        finalResult += newNum;
      }
    }
    limitOper--;
  }

  (operType == 'S') ? printf("%.1f\n", finalResult) : printf("%.1f\n", (finalResult / 66));

  return 0;
}
