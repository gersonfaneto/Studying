#include <cstdio>

using namespace std;

int main(void) {
  int numComplains = 0;

  while (scanf("%d", &numComplains) != EOF) {
    (numComplains == 0) ? printf("vai ter copa!\n") : printf("vai ter duas!\n");
  }

  return 0;
}
