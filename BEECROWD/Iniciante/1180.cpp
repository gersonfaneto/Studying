#include <iostream>

using namespace std;

int main(void) {
  int arrSize = 0, newNum = 0;
  int minorIndex = 0, minorValue = 0;

  cin >> arrSize;

  for (int i = 0; i < arrSize; i++) {
    cin >> newNum;
    if (i == 0 || newNum < minorValue) {
      minorValue = newNum, minorIndex = i;
    }
  }

  cout << "Menor valor: " << minorValue << '\n';
  cout << "Posicao: " << minorIndex << '\n';

  return 0;
}
