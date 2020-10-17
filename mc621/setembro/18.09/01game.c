#include<stdio.h>
#include<string.h>


//par == 0 significa que temos um par
//par == 1 significado que ira comecar outro par
//res = -1 perdeu | res = 1 ganhou

int main(){
  int t, tamanho, qtdUm=0, qtdZero=0, qtdPares=0, res=0, par=0;
  char s[100];

  scanf("%d",&t);
  //printf("VALOR DE T:%d\n", t);

  while(t--){
    scanf("%s", s);
    //printf("STRING: %s\n", s);

    tamanho = strlen(s);
    //printf("TAMANHO:%d\n", tamanho);

    for(int i=0;i<tamanho;i++){

      if((int)s[i] == '0'){
        //printf("ZERO -- %c\n", s[i]);
        qtdZero++;     

      }
      
      if((int)s[i] == '1'){
        //printf("UM -- %c\n", s[i]);
        qtdUm++;
      }
    }

    if(qtdUm == 0 || qtdZero == 0){
      res = -1;
    }
    
    if((qtdUm == qtdZero) && (qtdUm % 2 == 0)){
      res = -1;
    }else{
      res = 1;
    }

    if(qtdUm < qtdZero){
      if(qtdUm % 2 == 0){
        res = -1;
      }else{
        res = 1;
      }
    }else{
      if(qtdZero % 2 == 0){
        res = -1;
      }else{
        res = 1;
      }
    }

    if(res == -1){
      printf("NET\n");
    }else if(res == 1){
      printf("DA\n");
    }

    qtdZero=0;
    qtdUm=0;
  }

  return 0;
}