#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "1234";
  printf("%d\n", strlen(s));
  printf("%c\n", *s);
  // Expected ans: "31385054833040435201469"
  //printf("*(a.arr + 1) = %s\n", *(a.arr + 1));
  //char t[3];
  //sprintf(t, "%d", 789);
  //printf("t = %s\n", t);
  return 0;
}
