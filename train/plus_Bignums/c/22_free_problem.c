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
  printf("*pnum = %p\n", *pnum);
  printf("*pnum = %s\n", *pnum);
  printf("len = %d\n", len);
  // if there is a single digit then we do nothing.
  if (len > 1) {
    int i;
    for (i=0; i<len; ++i) {
      printf("i = %d\n", i);
      printf("*(*pnum+%d) = %c\n", i, *(*pnum+i));
      if (*(*pnum+i) != '0') {
        *pnum = *pnum + i;
        printf("*pnum + %d = %p\n", i, *pnum + i);
        break;
      }
    }
  }
}

char* add(char* prev_sum, char* new_num) {
  int len1 = strlen(prev_sum);
  int len2 = strlen(new_num);
  if (len1 == 1 && *prev_sum == '0') {
    free(prev_sum);
    return new_num;
  }
  if (len2 == 1 && *new_num == '0') {
    return prev_sum;
  }
  int len_alloc = ((len1 > len2)? len1:len2) + 1;
  char* this_sum = malloc(sizeof(char) * (len_alloc));
  int i = len1 - 1;
  int j = len2 - 1;
  int k = len_alloc - 1;
  int somme = 0;
  printf("");
  while (1) {
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
    printf("i = %d, j = %d, k = %d\n", i, j, k);
  }
  while (i >= 0) {
    printf("entered while i\n");
    somme += *(prev_sum + i) - '0';
    *(this_sum + k) = (somme % 10) + '0';
    somme = somme / 10;
    --i;
    --k;
  }
  while (j >= 0) {
    printf("entered while j\n");
    somme += *(new_num + j) - '0';
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
    printf("enterd if somme: somme = %d, k = %d\n", somme, k);
    *(this_sum + k) = somme + '0';
  }
  ltrim(&this_sum);
  printf("exited ltrim(&this_sum)\n");
  free(prev_sum);
  return this_sum;
}

char* summary(arr_string arr) {
  //long int i;
  ////int n_digits = 0;
  //int len;
  //long int sum = 0;
  //// find the length of the longest string
  ///*
  //for (i=0; i<arr.size; ++i) {
  //  //sum += strtol(*(arr.arr + i), NULL, 10);
  //  len = strlen(*(arr.arr + i));
  //  if (len > n_digits)
  //    n_digits = len;
  //}*/
  ////char s_sum[(n_digits+1)*arr.size];
  //long int n_digits = 100000000;
  ////char s_sum[n_digits];
  //char appended[n_digits];
  //char *s_sum = malloc(sizeof(char)*n_digits);
  //for (i = n_digits - 1; i > 0; --i) {
  //  for (int j = 0; j < arr.size; ++j) {
  //    len = strlen(*(arr.arr + j));
  //    int k, l;
  //    k = l = 0;
  //    for (k = 0; k < n_digits; ++k) {
  //      if (k + 1 + len < n_digits) {
  //        appended[k] = '0';
  //      }
  //      else {
  //        appended[k] = *(*(arr.arr + j) + l);
  //        ++l;
  //      }
  //    }
  //    //sum += *(*(arr.arr + j) + i) - '0';
  //    sum += appended[i] - '0';
  //  }
  //  s_sum[i] = (sum % 10) + '0';
  //  sum = sum / 10;
  //}
  ////sprintf(s, "%ld", sum);
  ////return s_sum;
  ////return &s_sum[0];
}

int main() {
  //arr_string a;
  //a.size = 2;
  //char *s[2] = {"123", "456"};
  ////char *s[2] = {"5091002802391387", "10279147192864129192650", "019279810924010927509175", "1826091625162576108257"};
  //a.arr = &s[0];
  //printf("summary(a) = %s\n", summary(a));
  //// Expected ans: "31385054833040435201469"
  ////printf("*(a.arr + 1) = %s\n", *(a.arr + 1));
  ////char t[3];
  ////sprintf(t, "%d", 789);
  ////printf("t = %s\n", t);

  /* Test: ltrim()
  char *s = "000724855";
  ltrim(&s);
  printf("char *s = \"000724855\";\n");
  printf("After ltrim(s), s = %s\n", s);
   */

  /* Test: add()
   */
  char *s = "724855";
  char *t = "724855";
  printf("sizeof(*s) = %zu\n", sizeof(*s));
  printf("sizeof(s) = %zu\n", sizeof(s));
  printf("sizeof(t) = %zu\n", sizeof(t));
  printf("strlen(s) = %d\n", strlen(s));
  printf("strlen(t) = %d\n", strlen(t));
  char *u = add(s, t);
  printf("strlen(u) = %d\n", strlen(u));
  printf("u = %s\n", u);

  return 0;
}
