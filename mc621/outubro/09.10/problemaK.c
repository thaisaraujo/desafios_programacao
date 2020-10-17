#include<stdlib.h>
#include<stdio.h>

int procuraPosicao(int classificacao[], int ai){
  int i;
  for (i=0; i<8; i++){
    if(classificacao[i] == ai){
      return i;
    }
  }

  return -1;
}

int main(){
  int n, ai, pos, temp;
  int classficacao[8] = {1,2,3,4,5,6,7,8};

 if(scanf("%d", &n) == 1);

  while(n--){
    
    if(scanf("%d", &ai) == 1);

    pos = procuraPosicao(classficacao, ai);
    //printf("posição no vetor de ai:%d\n",pos);
    temp = classficacao[pos-1];
    classficacao[pos-1] = ai;
    classficacao[pos] = temp;

    /*
    for(int i=0;i<8;i++){
      printf("%d ", classficacao[i]);
    }
    printf("\n");
    */
  }

  for(int i=0;i<8;i++){
    if(i == 7){
      printf("%d", classficacao[i]);
    }else{
      printf("%d ", classficacao[i]);
    }
  }
  printf("\n");

  return 0;
}