#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * input: lista de nome
 * output: informa se a lista está em ordem cresc, descre, nenhuma
 * tabela ASCII A = 65
 * saida=0 A, saida=1 D, saida=2 E
 */



#define posI 0
int main(){
  int n, saida=2;

  char lista[n][13];

  scanf("%d",&n);
  scanf("%s", lista[i]);

  while(i<n){
    scanf("%s", lista[i]);
    i++;
  }

for(i=0;i<=n;i++){
  gets(str[i]);
    for(i=0;i<=count;i++){
      for(j=i+1;j<=count;j++){
        if(strcmp(str[i],str[j])>0){
          strcpy(temp,str[i]);
          strcpy(str[i],str[j]);
          strcpy(str[j],temp);
         }
      }


  if(saida==0)
    printf("INCREASING\n");
  if(saida==1)
    printf("DECREASING\n");
  else
    printf("NEITHER\n");


  return 0;

}
