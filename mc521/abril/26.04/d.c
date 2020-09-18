#include <stdio.h>
#include <stdio.h>
#define MAX_VAL 1000001


int numFat[] = {1,2,6,24,120,720,5040,40320,362880},dp[MAX_VAL];

int min(int num1, int num2){
  if(num1 > num2)
    return num2;
  else
    return num1;
}

int min_fat(int n, int m){
  int i, j;
  dp[0] = 0;

  for(i=1;i<= n;++i){
    dp[i] = MAX_VAL;

    for(j=0;j<m;++j){
      if(i >= numFat
    [j]){
        dp[i] = min(dp[i], dp[i-numFat[j]]+1);
      }
    }
  }

  return dp[n];
}

int main(void) {

  int tam = 10;
  int n,res;
  scanf("%d",&n);
  res = min_fat(n,tam);
  printf("%d\n",res);

  return 0;
}
