#include <stdio.h>
#include <limits.h>

int main() {
  int min_int = INT_MIN;
  int max_int = INT_MAX;
  int var = 2147483648;

  printf("Min int: %d\n", min_int);
  printf("Max int: %d\n", max_int);
  printf("%d", var);
}
