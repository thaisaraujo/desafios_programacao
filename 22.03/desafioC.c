#include<stdio.h>
#include<string.h>


#define MAX 101
#define TAM 3
int main(){
  char entrada[MAX];
  int tamE, totalN=0, totalE=0, totalI=0, totalT=0, i=0;
  int pala[TAM], menor;

  scanf("%s", entrada);
  tamE = strlen(entrada);

  while(i<tamE){
    if(entrada[i] == 'n')
        totalN++;
    if(entrada[i] == 'e')
      totalE++;
    if(entrada[i] == 'i')
      totalI++;
    if(entrada[i] == 't')
      totalT++;

    i++;
  }


  pala[0] = ((totalN-1)/2);
  pala[1] = (totalE/3);
  pala[2] = totalI;
  pala[3] = totalT;

  menor = pala[0];

  for(i=0;i<=TAM;i++){
    if(pala[i] < menor)
        menor = pala[i];
  }

  printf("%d\n",menor);
}
