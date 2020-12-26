#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char s[] = "5091002802391387";
  printf("strtol(s) = %ld\n", strtol(s, NULL, 10));
  return 0;
}
