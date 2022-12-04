#include <iostream>

using namespace std;

long long int QuickFibonnaci(int tValue);

int main(void) {
  int T = 0;
  int qntCases = 0;

  cin >> qntCases;

  for (int i = 0; i < qntCases; i++) {
    cin >> T;
    cout << "Fib(" << T << ") = " << QuickFibonnaci(T) << '\n';
  }


  return 0;
}

long long int QuickFibonnaci(int tValue) {
  if (tValue == 1 || tValue == 0) {
    return tValue;
  }
  
  return QuickFibonnaci(tValue - 1) + QuickFibonnaci(tValue - 2);
}
