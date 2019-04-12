#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Desafio B - SPOJ - KNAPSACK - The Knapsack Problem
 * programacao dinamica - problema da mochila
 * Capacidade da Mochila - S
 * Quantidade de itens - N
 * Numero do item J - Peso do Item P
 */

#define max 2001
int matriz[max][max];


/* retornar o maior*/
int maxValor (int a, int b){
    return (a > b) ? a : b;
}

/* retorna o valor max */
int knapsack (int s, int itens [], int peso[], int n){
    if(matriz[n][s]>-1)
        return matriz[n][s];

    if(n == 0 || s == 0){ /*capacidade da mochila ou nao ha itens*/
        matriz[n][s]=0;
        return 0;
    }

    if(itens[n-1] > s){ /*se a soma dos itens superou o suporte da mochila, recusao */
        matriz[n][s] = knapsack(s, itens, peso, n-1);
    }else{
        matriz[n][s] = maxValor(peso[n-1] + knapsack(s-itens[n-1], itens, peso, n-1), knapsack(s,itens,peso,n-1));
    }

    return matriz[n][s];
}

int main(){
    int n, s, res, i=0;
    int itens[max], peso[max];

    memset(matriz,-1, max*max*sizeof(int));

    scanf("%d %d", &s, &n);

    while(i<n){
        scanf("%d %d", &itens[i], &peso[i]);
        i++;

    }

    res = knapsack(s,itens,peso,n);
    printf("%d\n", res);

    return 0;
}