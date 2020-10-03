#include<stdio.h>
#include<math.h>

int main(){
  long int n;
  double p, res = 1;

  scanf("%ld %lf", &n, &p);
  

  while (n > 0){

    if(n % 2 == 1){
      res = res*(1-p) + (1-res)*p;
    }
    p = p*(1-p) + (1-p)*p;
    n = n/2;
    //printf("res:%.10lf - n:%ld\n", res, n);
  }

  printf("%.10lf\n", res);


return 0;

} 