#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  char *s = malloc(sizeof(char*) * 3);
  //char s[] = malloc(sizeof(char*) * 3); // Wrong!
  //s = "Alice";
  //(s + 1) = &"Bob";
  //(s + 2) = "Charlie";
  //s = {"Alice", "Bob", "Charlie"};
  free(s);
  return 0;
}
