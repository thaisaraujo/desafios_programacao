#include<stdio.h>
#include<stdlib.h>
#define entrada 9
#define total 100

int somacem(int vet[],int i, int j){
  int l, soma=0;

  for(l=0;l<entrada;l++){
    if(l==i || l==j){
      if(l==entrada-1)
        break;
      l++;
    }
    soma=soma+vet[l];
  }
    if(soma==total)
      return 1;
    else
      return -1;

}


int main(){
  int i=0,j, input, soma=0, somat=0, somaS=0, anao1, anao2, res;
  int vet[entrada];

  while(i<entrada){
    scanf("%d",&input);
    vet[i]=input;
    soma=soma+input;

    i++;
  }

  res = soma-total;
  i=0;

  while(i<entrada){
    for(j=i+1;j<entrada;j++){
      somat=vet[i]+vet[j];
        if(somat==res){
          somaS = somacem(vet, i, j);
      /*    printf("somaS:%d\n",somaS);*/
          if(somaS == 1){
            anao1=vet[i];
            anao2=vet[j];
            i=entrada;
            j=entrada;
          }
        }
    }
    i++;
  }

  for(i=0;i<entrada;i++){
    if(vet[i]==anao1 || vet[i]==anao2){
      if(i==entrada-1)
        break;
      i++;
    }
    printf("%d\n",vet[i]);
  }

    return 0;
}
