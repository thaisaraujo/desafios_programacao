#include<stdio.h>
#include<stdlib.h>

#define MAX_TAM 2000

int cmp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
  int n, number, dif, i=0, indP=0, indI=0;
  int impar[MAX_TAM];
  int par[MAX_TAM];
  int long long soma = 0;

  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d",&number);

    if(number % 2 == 0){
      par[indP] = number;
      indP++;
    }else{
      impar[indI] = number;
      indI++;
    }

  }

  /* ordenacao */
  qsort(par,indP,sizeof(int), cmp);
  qsort(impar,indI,sizeof(int), cmp);

  /*for(i=0;i<indP;i++){
    printf("%d",par[i]);
  }
  for(i=0;i<indI;i++){
    printf("%d",impar[i]);
  }*/

  dif = (indI - indP);

/*  printf("indI:%d - indP:%d - diff:%d\n",indI, indP, dif);*/

  if(dif == 0 || dif == 1 || dif == -1){ /* qtd par == qtd impar*/
    soma = 0;

  }else if(dif < 0){ /* qtd par maior que impar*/
    dif = dif*(-1);

    for(i=0;i<dif-1;i++){
      soma += par[i];
    }

  }else{ /* qtd de impar maior que par*/

    for(i=0;i<dif-1;i++){
      soma += impar[i];

    }
  }

  printf("%lld\n",soma);

  return 0;


}
