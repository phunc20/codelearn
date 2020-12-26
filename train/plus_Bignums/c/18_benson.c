#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Complete the function summary() to make this code run with the correct answer
 */

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

char* summary(arr_string arr) {
}

int main() {
  arr_string a;
  a.size = 4;
  char *s[4] = {"5091002802391387", "10279147192864129192650", "019279810924010927509175", "1826091625162576108257"};
  a.arr = &s[0];
  printf("summary(a) = %s\n", summary(a));
  printf("Expected ans: \"31385054833040435201469\"\n");
  return 0;
}
