#include <stdio.h>

int somadigitos(i){
   int soma = 0;
   while (i != 0) {
       soma = soma + i % 10;
       i = i/10;
   }
   return soma;
}


int main(void) {
  int min,max,i,soma=0,a;

  while(scanf("%d %d",&min,&max) != EOF){
    if(min > max){
      a= min;
      min = max;
      max = a;
    }
    if(min%2 == 0)
      min++;
    if(max%2 == 0)
      max--;
    for(i=min;i<=max;i+=2){
      soma += somadigitos(i);
    }
    printf("%d\n",soma);
    soma=0;
  }

  return 0;
