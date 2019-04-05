#include<stdio.h>
#include<stdlib.h>

/*

Desafio G - Codeforces 769B
entrada: m - número de copos, n - número de buracos, k - número de trocas
saida: posicao final do osso
 
*/

#define max 1e6 + 5;

int main(){
    int m, n, k, u, v, i=0, caiu = 0, achei = 0, b;
    int copos[max], buraco[max]; 

    scanf("%d %d %d", &n , &m, &k);

 /*   copos = (int *)calloc(n,sizeof(int));
    copos[1] = 1;
    caiu = 1;

 /*   buraco = (int *)malloc(n*sizeof(int));*/

    for(i=0;i<m;i++){
        scanf("%d", &b);
        buraco[b] = 1;
    }

    if(buraco[1] == 1){
        achei = 1;
    }

    for(i=0;i<k;i++){
        scanf("%d %d",&u,&v);        

        if(achei)
            continue;

        if(copos[u]){
            copos[u]=0;
            copos[v]=1;
            caiu = v;
        }else if(copos[v]){
            copos[v]=0;
            copos[u]=1;
            caiu=u;
        }
        if(buraco[caiu])
            achei = 1;

    }
    

    printf("%d\n", caiu);

    return 0;

}
