#include<stdio.h>
#include<stdlib.h>

/*

Desafio G - Codeforces 769B
entrada: m - número de copos, n - número de buracos, k - número de trocas
saida: posicao final do osso
 
*/

#define max 1000002

int main(){
    int m, n, k, u, v, i=0,achei=1, b, primeiraP = 0;
    int copos[max];

    scanf("%d %d %d", &n , &m, &k);

     for(i=0;i<n;i++){
        copos[i] = 0;
    }


    for(i=0;i<m;i++){
        scanf("%d", &b);
        copos[b] = 1;
    }

    if(copos[1] == 1){
        primeiraP = 1;
    }

    for(i=0;i<k;i++){
        scanf("%d %d",&u,&v);     

        if(copos[achei]== 1 || primeiraP == 1)
            continue;   

        if(u == achei){
            achei = v;
        }else if(v == achei){
            achei= u;
        }


    }
    

    printf("%d\n", achei);

    return 0;

}
