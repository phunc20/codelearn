#include <stdio.h>
#include <stdlib.h>

int main() {
  //char *s; // No.
  //char s[]; // Error
  char s[3];
  //char s[4];
  sprintf(s, "%d\0", 789);
  //puts(s);
  //printf("s = %s\n", *s); // No.
  printf("s = %s\n", s);
  return 0;
}
