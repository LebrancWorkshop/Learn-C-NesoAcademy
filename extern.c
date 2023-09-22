#include <stdio.h>
#include "var.c"

int main() {
  extern int a;
  printf("%d", a);
  return 0; 
}
