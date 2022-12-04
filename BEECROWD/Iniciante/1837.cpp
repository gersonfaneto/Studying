#include <iostream>

using namespace std;

int main(void) {
  int A = 0, B = 0;
  int R = 0, Q = 0;

  cin >> A;
  cin >> B;

  Q = A / B;
  R = A - (Q * B);

  cout << Q << " " << R << '\n';

  return 0;
}
