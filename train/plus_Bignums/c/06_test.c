#include <stdio.h>
#include <stdlib.h>

#define NUMDIGITS 999999999999

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

int main() {
  arr_string a;
  a.size = 2;
  char *s[2] = {"123", "456"};
  a.arr = &s[0];
  printf("*a.arr = %s\n", *a.arr);
  printf("*(a.arr + 1) = %s\n", *(a.arr + 1));
  return 0;
}
