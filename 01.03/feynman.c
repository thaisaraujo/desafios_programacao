#include<stdio.h>
#include<math.h>

/*
 * Desafio D - SPOJ SAMER08F
 * para cada entrada N informar a quantidade de quadrados diferentes em uma grade N x N
 */

int soma(int n){
    int i = 1;
    int soma = 0;

    while(i<=n){

        soma += pow(i,2);
       /* printf("%d\n", i); */
        i++;
    }

    return soma;

}


int main(){
    int n, saida;

    while(scanf("%d", &n)){
      /*  printf("%d\n", n);*/

        if(n == 0)
            break;

        saida = soma(n);

        printf("%d\n", saida);
    }

    return 0;
}