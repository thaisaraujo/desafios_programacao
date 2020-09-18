/*
 Desafio C
 entrada: numero n de vezes que devera ser apresentada a sentenca
 saida: minimo de comando para apresentar a setenca n vezes - dados as sit anterior
 Hello World - UVA 11636


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
