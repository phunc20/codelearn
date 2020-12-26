#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s;
  sprintf(s, "%d\0", 789);
  sprintf(s, "%d", 789);
  puts(s);
  //printf("s = %s\n", *s);
  //printf("s = %s\n", s);
  return 0;
}
