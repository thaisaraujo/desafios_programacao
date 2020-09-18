#include<stdio.h>
#include<stdlib.h>
#define max 100

/* Desafio I - distuberd people
 * n flats definir o mim possivel de luzes apagadas - seq 101
 */
int main(){
  int n,flat[max];
  int i=0, somaUm=0, somaZero=0, mudar=0;

  scanf("%d",&n);
//  printf("%d\n",n);


  for(i=0;i<n;i++){
    scanf("%d",&flat[i]); /*entrada*/
  //  printf("%d\n",flat[i]);

    if(flat[i]==1)
      somaUm++;

    if(flat[i]==0)
      somaZero++;
  }

  /*todos acessos*/
  if(somaUm == n){
    printf("0\n");
    return 0;
  }

  /*todos apagados*/
  if(somaZero == n){
    printf("0\n");
    return  0;
  }


  for(i=1;i<n-1;i++){
    if(flat[i-1] == 1 && flat[i+1] == 1 && (flat[i] == 0)){
        mudar++;
        flat[i+1] = 0;
    }
  //  printf("(j-1):%d - (j):%d - (j+1):%d\n",j-1,j,j+1);
  }


  printf("%d\n",mudar);

  return 0;
}
