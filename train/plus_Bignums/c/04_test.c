#include <stdio.h>
#include <stdlib.h>

#define NUMDIGITS 999999999999

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

char* summary(arr_string arr)
{
  //int i = 0;
  //sum += strtol(arr.arr[i], NULL, 10);
  return *arr.arr;
}

int main() {
  //char *s;
  char s[20];
  sprintf(s, "%d", 30);
  printf("sprintf(\"%%d\", 30) = %s", s);
  return 0;
}
