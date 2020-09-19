#include<stdio.h>

int main(){
  int n, m, precoUmLadrinho, precoDoisLadrinho, t, qtdColuna=0;
  int ladrinho2Possivel=0, restanteLadrinho=0, precoL1=0, precoL2=0;
  int precoTotal1=0, precoTotal2=0;
  int qtdLadrinhoPreto=0, qtdLadrinhoBranco=0, qtdLadrinhoBrancoLinha=0;
  char ladrinhoAtual = '?';


  scanf("%d", &t);
  //printf("t:%d\n", t);

  while(t--){

    scanf("%d %d %d %d", &n, &m, &precoUmLadrinho, &precoDoisLadrinho);
    printf("n:%d - m:%d - precoLadrinho1:%d - precoLadrinho2:%d\n", n, m, precoUmLadrinho, precoDoisLadrinho);

    for(long int i=0; i<n*m; i++){

      printf("ESTOU NO FOR\n");

      scanf(" %c", &ladrinhoAtual);
      if(ladrinhoAtual == '.'){
        qtdLadrinhoBranco++;
        qtdLadrinhoBrancoLinha++;
        printf("LADRINHO BRANCO\n");
      }

      qtdColuna ++;
      printf("LADRINHO:%c\n", ladrinhoAtual);

      if(qtdColuna == m && ladrinhoAtual != '?'){

        printf("TERMINEI UMA LINHA\n");

        //USANDO O MAX POSSIVEL DO LADRINHO TIPO 2
        //if(qtdLadrinhoBrancoLinha%2==0){

          ladrinho2Possivel = qtdLadrinhoBrancoLinha/2;
          precoL2 = qtdLadrinhoBrancoLinha*precoDoisLadrinho;
          restanteLadrinho = qtdLadrinhoBrancoLinha-ladrinho2Possivel;
          printf("restanteLadrinho:%d\n", restanteLadrinho);
         
          if(ladrinho2Possivel!=1){
            precoL2 += restanteLadrinho*precoUmLadrinho;
          }
        
        //}

        //USANDO APENAS LADRINHO TIPO 1
        precoL1 = qtdLadrinhoBrancoLinha*precoUmLadrinho;

        //SOMA PARA O TOTAL
        qtdLadrinhoBrancoLinha = 0;
        precoTotal1 += precoL1;
        precoTotal2 += precoL2;

        qtdColuna = 0;
      
      }


    }

    if(precoTotal1 > precoTotal2){
      printf("%d\n", precoTotal2);
    }else{
      printf("%d\n", precoTotal1);
    }

    printf("PROXIMO CASO\n");
    precoTotal1=0;
    precoTotal2=0;

  }

  return 0;
}