#include <stdio.h>
int main() {
  long long unsigned int nums[10] = {623436977257570871294038996504,2022976039920117180927385,584707495891880736725408812476,48175618,756253761738391943589,421308999114370,39690056529105373965,3982,5467276201507804367371,7381};
  long int s = 0;
  for (int i = 0; i<10; ++i)
    s += nums[i];
  printf("s = %ld\n", s);
  return 0;
}
