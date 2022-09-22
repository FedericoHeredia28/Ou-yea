// Escribir una funci ́on que busque un n ́umero en un array de enteros y devuelva el  ́ındice donde encontr ́o
// el n ́umero o -1 de lo contrario.

#include <stdio.h>
#include <stdlib.h>

int find_num(int a[], int length, int num) {
  int nun_doun;
  for (int i = 0; i < length; i++) {
    if (a[i] == num) {
      printf("Indice del numero: %d\n", i);
      return i;
  }
  return -1;
}

int main(void) {
  int a[] = {5, 2, 1, 8};
  find_num(a, 4, 2);
  return 0;
}
