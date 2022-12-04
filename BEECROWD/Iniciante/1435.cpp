#include <iostream>

using namespace std;

int main(void) {
  int matrixSize = 0;

  do {
    cin >> matrixSize;

    for (int i = 0; i < matrixSize; i++) {
      for (int j = 0; j < matrixSize; j++) {
        (j == (matrixSize - 1)) ? printf("%3d\n", 1) : printf("%3d ", 1);
      }
    }
    cout << '\n';

  } while (matrixSize != 0);

  return 0;
}
