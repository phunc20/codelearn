#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int ten_to_six = 1000000;
  char s[ten_to_six];
  for (int i = 0; i < ten_to_six; ++i)
    s[i] = 'P';
  printf("s = %s\n", s);
  return 0;
}
