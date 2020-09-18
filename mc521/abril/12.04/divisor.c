#include<stdio.h>
#include<math.h>

/*
 * Dividor Summantion - SPOJ DIVSUM
 */

long long int soma (long long int number){
  int i, raiz, soma=0;

  raiz = sqrt(number);

  for(i=1;i*i<number;i++){
    if(number%i == 0){
      soma+=i+number/i;
    }
  }

  if(raiz*raiz == number)
    soma+=i;


  return soma-number;
}




int main(){
  int i=0, t, number;

  scanf("%d", &t);

  while(i<t){
    scanf("%d",&number);
    printf("%lld\n",soma(number));
    i++;

  }

  return 0;

}
