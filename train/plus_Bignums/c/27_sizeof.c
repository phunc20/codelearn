#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  printf("sizeof(long long) = %zu\n", sizeof(long long));
  printf("sizeof(long) = %zu\n", sizeof(long));
  printf("sizeof(long int) = %zu\n", sizeof(long int));
  return 0;
}
