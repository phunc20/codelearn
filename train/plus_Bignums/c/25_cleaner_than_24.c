#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

void ltrim(char** pnum) {
  // trim the leading zeros, e.g. "09123" -> "9123", "0001234" -> "1234"
  long int len = strlen(*pnum);
  //printf("**pnum = %s\n", **pnum);
  //printf("*pnum = %p\n", *pnum);
  //printf("*pnum = %s\n", *pnum);
  //printf("len = %d\n", len);
  // if there is a single digit then we do nothing.
  if (len > 1) {
    int i;
    for (i=0; i<len; ++i) {
      //printf("i = %d\n", i);
      //printf("*(*pnum+%d) = %c\n", i, *(*pnum+i));
      if (*(*pnum+i) != '0') {
        *pnum = *pnum + i;
        //printf("*pnum + %d = %p\n", i, *pnum + i);
        break;
      }
    }
  }
}

char* add(char* prev_sum, char* new_num) {
  int len1 = strlen(prev_sum);
  int len2 = strlen(new_num);
  if (len1 == 1 && *prev_sum == '0') {
    //free(prev_sum);
    return new_num;
  }
  if (len2 == 1 && *new_num == '0') {
    return prev_sum;
  }
  int len_alloc = ((len1 > len2)? len1:len2) + 1;
  //printf("len_alloc = %d\n", len_alloc);
  char* this_sum = malloc(sizeof(char) * (len_alloc+1));
  int i = len1 - 1;
  int j = len2 - 1;
  int k = len_alloc - 1;
  int somme = 0;
  //printf("");
  while (1) {
    //printf("i = %d, j = %d, k = %d\n", i, j, k);
    if (i < 0 || j < 0) {
      //while (somme != 0) {
      //  *(this_sum + k) = (somme % 10) + '0';
      //  somme = somme / 10;
      //}
      break;
    }
    somme += (*(prev_sum + i) - '0') + (*(new_num + j) - '0');
    *(this_sum + k) = (somme % 10) + '0';
    somme = somme / 10;
    --i;
    --j;
    --k;
  }
  while (i >= 0) {
    //printf("entered while i\n");
    somme += *(prev_sum + i) - '0';
    *(this_sum + k) = (somme % 10) + '0';
    somme = somme / 10;
    --i;
    --k;
  }
  while (j >= 0) {
    somme += *(new_num + j) - '0';
    //printf("entered while j: j = %d, k = %d, somme = %d\n", j, k, somme);
    *(this_sum + k) = (somme % 10) + '0';
    somme = somme / 10;
    --j;
    --k;
  }
  //while (somme != 0) {
  //  printf("entered while j");
  //  *(this_sum + k) = (somme % 10) + '0';
  //  somme = somme / 10;
  //  --k;
  //}
  if (somme != 0) {
    //printf("enterd if somme: somme = %d, k = %d\n", somme, k);
    *(this_sum + k) = somme + '0';
  }
  else
    *(this_sum + k) = '0';
  //printf("before ltrim(&this_sum): this_sum = %s\n", this_sum);
  ltrim(&this_sum);
  //printf("exited ltrim(&this_sum)\n");
  //free(prev_sum);
  return this_sum;
}

char* summary(arr_string arr) {
  //char *res;
  char *so_far = "0";
  for (int i=0; i<arr.size; ++i) {
    ltrim((arr.arr + i));
    so_far = add(so_far, *(arr.arr + i));
  }
  return so_far;
}

int main() {
  arr_string a;
  //a.size = 2;
  //char *s[2] = {"123", "456"};
  //a.size = 4;
  //char *s[4] = {"5091002802391387", "10279147192864129192650", "019279810924010927509175", "1826091625162576108257"};
  a.size = 10;
  char *s[10] = {"1769091","20054906338","7207999882834307764084","9213321719781684873205219","9991547099886097","2434201378352050","30788208017412","6547310012769032200","30247","1187285930339102809243992"};
  a.arr = &s[0];
  printf("summary(a) = %s\n", summary(a));
  printf("Expect ans:  10407822209770191502206730\n");
  //printf("Expected ans: \"31385054833040435201469\"");

  return 0;
}
