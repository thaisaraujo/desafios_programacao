#include<stdio.h>

//NÃO PASSOU =(

int main(){
  int n, m, precoUmladrilho, precoDoisladrilho, t; 
  int precoL1=0, precoL2=0, precoTotal1=0, precoTotal2=0, qtdColuna=0;
  int consecutivo=0, qtdConsecutivo=0, qtdNConsecutivo=0;
  char ladrilhoAtual;


  scanf("%d", &t);
  //printf("t:%d\n", t);

  //LOOP DOS TESTES
  while(t--){

    scanf("%d %d %d %d", &n, &m, &precoUmladrilho, &precoDoisladrilho);
    //printf("n:%d - m:%d - precoladrilho1:%d - precoladrilho2:%d\n", n, m, precoUmladrilho, precoDoisladrilho);

    //ENTRADA PARA CADA TESTE
    for(long int i=0; i<n*m; i++){

      //printf("ESTOU NO FOR\n");

      scanf(" %c", &ladrilhoAtual);


      if(ladrilhoAtual == '.' && consecutivo!=0){
        //printf("LADRINHO:%c - LADRILHO CONSECUTIVO\n", ladrilhoAtual);
        qtdConsecutivo++;
        if(qtdNConsecutivo>0){
          qtdNConsecutivo--;
        }
        consecutivo=0;
      }
      
      else if(ladrilhoAtual == '.' && consecutivo==0){
        //printf("LADRINHO:%c - LADRILHO N CONSECUTIVO\n", ladrilhoAtual);
        qtdNConsecutivo++;
        consecutivo++;
      }

      else{ //ladrilho preto
        consecutivo=0; 
      }

      qtdColuna ++;

      if(qtdColuna == m){
        
        //printf("TERMINEI UMA LINHA\n");
        //printf("qtdNConsecutivo:%d - qtdConsecutivo:%d - consecutivo:%d\n", qtdNConsecutivo, qtdConsecutivo, consecutivo);

        //ladrilho TIPO 2
        //PARA ladrilhoS CONSECUTIVO USAR O TIPO 2
        //PARA LADRILHOS NÃO CONSECUTIVO USAR TIPO 1
        precoL2 = (qtdNConsecutivo*precoUmladrilho) + (qtdConsecutivo*precoDoisladrilho);

        //ladrilho TIPO 1
        precoL1 = ((qtdConsecutivo*2)+qtdNConsecutivo)*precoUmladrilho;

        //printf("precoL2:%d - precoL1:%d\n", precoL2, precoL1);
      
        //SOMA PARA O TOTAL
        precoTotal1 += precoL1;
        precoTotal2 += precoL2;

        //ZERANDO VARIAVEIS PARA PROX TESTE
        qtdColuna = 0;     
        qtdNConsecutivo=0;
        qtdConsecutivo=0; 
        consecutivo = 0;
        
      }


    }

    if(precoTotal1 > precoTotal2){
      printf("%d\n", precoTotal2);
    }else{
      printf("%d\n", precoTotal1);
    }

    //printf("PROXIMO CASO\n");
    precoTotal1=0;
    precoTotal2=0;

  }

  return 0;
}