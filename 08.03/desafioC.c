/*
 entrada: numero n de vezes que devera ser apresentada a sentenca
 saida: minimo de comando para apresentar a setenca n vezes

  int i, entrada, total=0;
  int vet[MAX];
  float qtdComando;

  for(i=1;i<MAX;i++){

    scanf("%d",&vet[i]);

    if(vet[i] == -1){
      return 0;

    }else if(i == 1){
      total = vet[i];
      printf("Case %d: 1\n", i);

    }else{
        qtdComando = (float)(vet[i] - vet[i-1]) / vet[i-1];
        qtdComando = ceil(qtdComando);
        printf("Case %d: %0.f\n", i,qtdComando);

    }
  }


*/


#include<stdio.h>

int main(){
  int qtdComando, i=0, n, total;
  while(scanf("%d", &n) == 1){
    if(n<0){
      break;
    }

    i+=1;
    total=1;
    qtdComando=0;

    while(total<n){
      total+=total;
      qtdComando+=1;
    }

    printf("Case %d: %d\n",i,qtdComando);
  }
 
  return 0;
}
