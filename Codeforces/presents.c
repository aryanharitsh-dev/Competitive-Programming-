#include<stdio.h>
typedef long long int lli;
int main() {
  int n,e;
  int a[110];
  scanf("%d", &n);
  int x[n+10];
  
  for(int i=0;i<n;++i){
      scanf("%d", &x[i]);
  }

  for(int i=0;i<n;i++){
      a[x[i]]=i+1;
  }

  for(int i=1;i<=n;++i){
      printf("%d ", a[i]);
  }

  return 0;
}

