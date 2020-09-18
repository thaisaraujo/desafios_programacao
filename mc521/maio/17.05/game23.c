#include<stdio.h>
/*#include<math.h>
  desafio I - game 23
  dado dois numeros, verificar com quantos mov transformar um em outro, apenas com multiplicacao por 2 ou 3
*/

int main(){
  int n, m, temp, divi, mov=-1;

  scanf("%d %d",&n, &m);
  temp = n;

/*  if(n == m){
    printf("0\n");
  }*/

  if(m % n == 0){
    mov = 0;
    divi = m/n;

    while(divi % 2 == 0){
        divi = divi/2;
        mov++;
    }

    while(divi % 3 == 0){
      divi = divi/3;
      mov++;
    }

    if( divi != 1)
      mov = -1;
  }

  printf("%d\n",mov);

  return 0;
}
