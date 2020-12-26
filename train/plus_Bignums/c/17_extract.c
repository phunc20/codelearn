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
  printf("*(a.arr + 1) = %s\n", *(a.arr + 1));
  //printf("*(*(a.arr + 1) + 2) = %s\n", *(*(a.arr + 1) + 2));
  printf("*(*(a.arr + 1) + 2) = %c\n", *(*(a.arr + 1) + 2));
  char t[3];
  sprintf(t, "%d", 789);
  printf("t = %s\n", t);
  return 0;
}
