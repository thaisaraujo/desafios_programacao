#include<stdio.h>
#include<stdlib.h>


int max(int a, int b){
  int maior;
  maior = a;

  if(maior < b){
    maior = b;
  }
  return maior;
}

int main(){
  int y, w, maior, minimo, res;

  scanf("%d %d", &y, &w);

  maior = max(y,w);
  minimo = (6-maior)+1;

  if(minimo % 2 == 1){

    if(minimo == 3){
      printf("1/2\n");
    }else{
      printf("%d/6\n", minimo);
    }

  }else{

    if(minimo == 4){
      printf("2/3\n");
    }else{
      res = 6/minimo;
      printf("1/%d\n", res);
    }

  }

  return 0;

}