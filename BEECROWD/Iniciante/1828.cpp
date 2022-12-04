#include <iostream>

using namespace std;
using String = string;

int main(void) {
  String lineIn, Sheldon, Raj;
  int qntCases = 0;

  cin >> qntCases;
  cin.ignore();
  
  for (int i = 0; i < qntCases; i++) {
    getline(cin, lineIn);

    Raj = lineIn.substr(lineIn.find(" ") + 1);
    Sheldon = lineIn.substr(0, lineIn.find(" "));

    if (Sheldon == "tesoura" && Raj == "papel") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "papel" && Raj == "pedra") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "pedra" && Raj == "lagarto") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "lagarto" && Raj == "Spock") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "Spock" && Raj == "tesoura") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "tesoura" && Raj == "lagarto") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    } 
    else if (Sheldon == "lagarto" && Raj == "papel") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "papel" && Raj == "Spock") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "Spock" && Raj == "pedra") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == "pedra" && Raj == "tesoura") {
      printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if (Sheldon == Raj) {
      printf("Caso #%d: De novo!\n", i + 1);
    }
    else {
      printf("Caso #%d: Raj trapaceou!\n", i + 1);
    }
  }

  return 0;
}
