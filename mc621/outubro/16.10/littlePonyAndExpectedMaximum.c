#include<stdio.h>
#include<math.h>

int main(){
  int n, m, i;
  long double doubleN, doubleM, res=0, cont, pot1, pot2;

  scanf("%d %d",&m, &n);

  doubleN = (double)n;
  doubleM = (double)m;

  for(i=1; i <= m; i++){

    cont = (double)i;
    pot1 = cont/doubleM;
    pot2 = (cont-1)/doubleM;
    res += cont*(pow(pot1,doubleN) - pow(pot2, doubleN));
    
  }

  printf("%Lf\n", res);

  return 0;
}