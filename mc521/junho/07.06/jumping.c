#include<stdio.h>
#include<stdlib.h>


int main(){
  int t;
  long long int a, b, k, res=0;
  int i=0;

  scanf("%d",&t);

  while(i<t){
    scanf("%lld %lld %lld",&a,&b,&k);
/*    printf("a:%lld - b:%lld - k:%lld\n",a,b,k);*/

    res = (a-b)* (k/2) + a * (k & 1);


    printf("%lld\n",res);
    res = 0;
    i++;

  }

  return 0;

}
