#include <stdio.h>
#include <stdlib.h>

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

char* summary(arr_string arr)
{
  int i;
  int sum = 0;
  for (i=0; i<arr.size; ++i) {
    sum += strtol(*(arr.arr + i), NULL, 10);
  }
  char s[999999999];
  sprintf(s, "%ld", sum);
  return s;
}

int main(int argc, char **argv) {
  char s[] = "5091002802391387";
  printf("strtol(s) = %ld\n", strtol(s, NULL, 10));
  return 0;
}
