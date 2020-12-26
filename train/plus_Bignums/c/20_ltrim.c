#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arr_string {
	char** arr;
	int size;
} arr_string;

void ltrim(char* pnum) {
  // trim the leading zeros, e.g. "09123" -> "9123", "0001234" -> "1234"
  long int len = strlen(pnum);
  printf("pnum = %p\n", pnum);
  printf("len = %d\n", len);
  // if there is a single digit then we do nothing.
  if (len > 1) {
    int i;
    for (i=0; i<len; ++i) {
      printf("i = %d\n", i);
      printf("*(pnum+i) = %c\n", *(pnum+i));
      if (*(pnum+i) != '0') {
        pnum = pnum + i;
        printf("pnum + %d = %p\n", i, pnum + i);
        break;
      }
    }
  }
}

char* add(char* prev_sum, char* new_num) {
  free(prev_sum);
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
   */
  //char *s = "000724855";
  char *s = "724855";
  ltrim(s);
  printf("char *s = \"000724855\";\n");
  printf("After ltrim(s), s = %s\n", s);
  return 0;
}
