#include<stdio.h>
#include<string.h>

/*
 * Desafio C - Edit Distance
 *  quantidade de operacoes para igualar duas stirngs
 */



 #define tamS 2000

int menor(int troca, int deleta, int inserir){
  int menor;
  printf("%d - %d - %d\n",troca, deleta,inserir);

  if(troca < deleta)
    menor = troca;
  else
    menor = deleta;

  if(inserir < menor)
    menor = inserir;

  printf("%d\n",menor);
  return menor;
}

int edit(char pala1[], char pala2[], int ind1, int ind2, int tam1, int tam2){
int troca=100000, deleta=100000, inserir=100000;

  if(ind1 > tam1){
    return tam2-ind2;
  }

  if(ind2 > tam2){
    return tam1-ind1;
  }

  if(ind1!=tam1 && ind2!=tam2){ /*nao cheguei na ultima letra*/

    if(pala1[ind1]==pala2[ind2]){ /*for igual - continua*/
      return edit(pala1, pala2, ind1+1, ind2+1, tam1, tam2);
    }else{
       troca = 1 + edit(pala1, pala2, ind1+1, ind2+1, tam1, tam2);
       deleta = 1 + edit(pala1, pala2, ind1+1, ind2, tam1, tam2);
       inserir = 1 + edit(pala1, pala2, ind1, ind2+1, tam1, tam2);
    }

  }else{ /*ultima letra*/

    if(pala1[ind1]!=pala2[ind2]){ /*se for igual retornar o menor falor*/
      troca = 1 + edit(pala1, pala2, ind1+1, ind2+1, tam1, tam2);
      deleta = 1 + edit(pala1, pala2, ind1+1, ind2, tam1, tam2);
      inserir = 1 + edit(pala1, pala2, ind1, ind2+1, tam1, tam2);
    }

  }
    return menor(troca, deleta, inserir);



}



 int main(){
   char pala1[tamS];
   char pala2[tamS];
   int i=0, tam1, tam2, res,t;

   scanf("%d",&t);

   while(i<t){
     scanf("%s", pala1);
     scanf("%s", pala2);
     tam1 = strlen(pala1);
     tam2 = strlen(pala2);

    printf("%s - %s\n",pala1,pala2);

     res = edit(pala1,pala2,0,0,tam1,tam2);
  //    menor(1,2,3);
  //    menor(10,9,8);
  //    menor(11,22,33);
     printf("OII %d\n",res);
     i++;

   }


   return 0;

 }
