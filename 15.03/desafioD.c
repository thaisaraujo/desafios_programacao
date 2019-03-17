#include<stdio.h>
#include<stdlib.h>
#define entrada 9
#define total 100

/* D - PATULJCI = KATTIS
 *
 */

int somacem(int vet[],int i, int j){
  int l, soma=0;

  for(l=0;l<entrada;l++){
    if(l!=i && l!=j)
      soma+=vet[l];
  }
 /* printf("soma: %d", soma);*/
    if(soma==total)
      return 1;
    else
      return -1;

}


int main(){
  int i=0,j,soma=0, somat=0, somaS=0, anao1, anao2, res;
  int vet[entrada];

  while(i<entrada){
    scanf("%d",&vet[i]);
    soma+=vet[i];
    i++;
  }

  res = soma-total;

  for(i=0;i<entrada;i++){
    for(j=i+1;j<entrada;j++){
      if(i!=j){
        somat=vet[i]+vet[j];
        if(somat==res){
       /*   printf("vet[%d]:%d - vet[%d]:%d", i, vet[i], j, vet[j]); */
          somaS = somacem(vet, i, j);
         /*   printf("somaS:%d\n",somaS);  */
            if(somaS == 1){
              anao1=i;
              anao2=j;
              i=entrada;
              j=entrada;
            }
            somat=0;
          }
      }
    }
  }

  for(i=0;i<entrada;i++){
    if(i!=anao1 && i!=anao2)
      printf("%d\n",vet[i]);
  }

    return 0;
}
