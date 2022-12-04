#include <iostream>

using namespace std;

int main(void) {
  int fDay = 0, sDay = 0,
      tDay = 0;

  cin >> fDay;
  cin >> sDay;
  cin >> tDay;

  if (fDay > sDay && tDay >= sDay) {
    printf(":)\n");
  }
  else if (fDay < sDay && sDay && tDay && (sDay - fDay <= tDay - sDay)) {
    printf(":)\n");
  }
  else if (fDay > sDay && sDay > tDay && (fDay - sDay > sDay - tDay)) {
    printf(":)\n");
  }
  else if (fDay == sDay && sDay < tDay) {
    printf(":)\n");
  }
  else {
    printf(":(\n");
  }

  return 0;
}
