#include <stdio.h>
#include <stdlib.h>

#define NUMDIGITS 999999999999

/*
Data types, whose names have the form arr_##name or matrix_##name, are already defined with the following structures:
typedef struct arr_##name{
    type* arr;
    int size;
} arr_##name;

typedef struct matrix_##name {
    arr_##name* arr;
    int size;
} matrix_##name;
If the task's output type is one of above types, your output will be scored according to the attributes[size and arr] of the returned object.
You can read the FAQ to gain a better understanding.
*/
char* summary(arr_string arr)
{
  int i;
  int sum = 0;
  for (i=0; i<arr.size; ++i) {
    sum += strtol(arr.arr[i], NULL, 10);
  }
  char s[NUMDIGITS];
  sprintf(s, "%ld", sum);
  return s
}

int main(int argc, char **argv) {
  char s[] = "5091002802391387";
  printf("strtol(s) = %ld\n", strtol(s, NULL, 10));
  return 0;
}
