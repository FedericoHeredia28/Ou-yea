#include <stdio.h>
#include <stdlib.h>

int euc(int a, int b) {
  while(b != 0) {
    int at;
    at = a;
    a = b;
    b = at % b;
  }
  return a;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("el mcd de %d y %d es: %d\n",a, b, euc(a, b));
  return 0;
}
