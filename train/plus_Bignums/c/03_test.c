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
  arr_string a;
  char* p[2] = &{"123", "456"};
  a.arr = &p;
  a.size = 2;
  printf("summary(a) = %s", summary(a));
  return 0;
}
