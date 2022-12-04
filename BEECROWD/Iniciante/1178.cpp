#include <iostream>

using namespace std;

int main(void) {
  double X = 0;

  cin >> X;

  for (int i = 0; i < 100; i++) {
    printf("N[%d] = %.4f\n", i, X);
    X /= 2;
  }

  return 0;
}
