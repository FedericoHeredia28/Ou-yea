#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print_array(int a[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int randod(int lo, int hi, int size) {
  int r;
  r = rand() % (hi - lo + 1) + lo;
}


void make_random_array(int a[], int size, int lo, int hi) {
  for (size_t i = 0; i < size; i++) {
    a[i] = randod(lo, hi, size);
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a_size = atoi(argv[1]);
  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  int a[a_size];
  make_random_array(a,a_size,lo,hi);
  print_array(a,a_size);
  return 0;
}
