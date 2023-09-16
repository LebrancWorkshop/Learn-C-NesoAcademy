#include <stdio.h>

int main() {
  int size_of_int;
  int size_of_char;
  int size_of_float;
  int size_of_double;
  int size_of_long;
  int size_of_long_long;
  int size_of_short;
  int size_of_unsigned_int;
  int size_of_unsigned_char;
  int size_of_unsigned_long;
  int size_of_unsigned_long_long;
  int size_of_unsigned_short;
  int size_of_bool;

  size_of_int = sizeof(int);
  size_of_char = sizeof(char);
  size_of_float = sizeof(float);
  size_of_double = sizeof(double);
  size_of_long = sizeof(long);
  size_of_long_long = sizeof(long long);
  size_of_short = sizeof(short);
  size_of_unsigned_int = sizeof(unsigned int);
  size_of_unsigned_char = sizeof(unsigned char);
  size_of_unsigned_long = sizeof(unsigned long);
  size_of_unsigned_long_long = sizeof(unsigned long long);
  size_of_unsigned_short = sizeof(unsigned short);
  size_of_bool = sizeof(_Bool);

  printf("Size of int: %d\n", size_of_int);
  printf("Size of char: %d\n", size_of_char);
  printf("Size of float: %d\n", size_of_float);
  printf("Size of double: %d\n", size_of_double);
  printf("Size of long: %d\n", size_of_long);
  printf("Size of long long: %d\n", size_of_long_long);
  printf("Size of short: %d\n", size_of_short);
  printf("Size of unsigned int: %d\n", size_of_unsigned_int);
  printf("Size of unsigned char: %d\n", size_of_unsigned_char);
  printf("Size of unsigned long: %d\n", size_of_unsigned_long);
  printf("Size of unsigned long long: %d\n", size_of_unsigned_long_long);
  printf("Size of unsigned short: %d\n", size_of_unsigned_short);
  printf("Size of bool: %d\n", size_of_bool);
}
