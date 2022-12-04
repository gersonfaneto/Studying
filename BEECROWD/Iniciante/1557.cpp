#include <iostream>
#include <cmath>

using namespace std;

int getJustSize(int tValue);

int main(void) {
  int matrixSize = 1, justSize = 0;
  int firstNum = 1, lastNum = 0;
  
  while (matrixSize != 0) {
    cin >> matrixSize;
    firstNum = 1, lastNum = 0;
    justSize = getJustSize(matrixSize);

    for (int i = 0; i < matrixSize; i++) {
      lastNum = firstNum;
      for (int j = 0; j < matrixSize; j++) {
        (j == (matrixSize - 1)) ? printf("%*d\n", justSize, firstNum) : printf("%*d ", justSize, firstNum);
        firstNum *= 2;
      }
      firstNum = (lastNum * 2);
    }
    if (matrixSize != 0) {
      printf("\n");
    }
  }

  return 0;
}

 int getJustSize(int tValue) {
   int maxNum = pow(2, (tValue + (tValue - 2)));
   int justSize = 0;

   while (maxNum > 0) {
     maxNum /= 10;
     justSize++;
   }

   return justSize;
 }
