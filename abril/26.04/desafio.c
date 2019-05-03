#include <stdio.h>
#include <math.h>

int v[]= {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025};

int isFib(int i){
  int j;
  for(j=0;j<24;j++){
    if(i==v[j])
      return 1;
  }
  return 0;

}
int main(void) {
  int n,i,count=0,res;
  scanf("%d",&n);
  //printf("%d\n",i);
  for(i=4; count != n;i++){
    if(isFib(i)){
      continue;
    }
    count+=1;
    res = i;
  }
  printf("%d\n",res);

  return 0;
}
