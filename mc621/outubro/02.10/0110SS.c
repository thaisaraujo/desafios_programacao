#include<stdio.h>

typedef long long int ll;

//não passou

int main(){
  ll res [10001];
  int n;

  res[0]=0;
  res[1]=2;
  res[2]=3;

  scanf("%d", &n);
  printf("n:%d", n);

  for(int i=0; i<=n; i++){
    res[i] = res[i-1] + res[i-2];
  }

  printf("%lld\n", res[n]);

  return 0;
}