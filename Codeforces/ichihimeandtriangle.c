#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli a,b,c,d;
      scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

      printf("%lld %lld %lld\n", a,c,c);
  }
  return 0;
}

