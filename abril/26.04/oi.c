Giordano MattielloApr 8, 2019, 7:22 PM
Obrigado Thais
vou tentar fazer aqui
consegui fazer o easy fibonacci, na vdd eu só peguei o código no moodle e acrescentei a parte do modulo, se quiser eu posso te mandar meu código
eu quero sim
vc fez em que linguagem ?
em c
Apr 9, 2019, 3:50 PM
Nossa Thais, não consegui fazer passar o dos consecutivos 😅
Apr 9, 2019, 11:03 PM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Desafio A - programação dinamica - EasyFibonacci
 * SPOJ - FIBEZ
 */

long long int memo[500001];


unsigned long long int fibo (unsigned long long int n){

    if(n<2){
        return n % 100000007;
    }else if(memo [n] >= 0){
        return memo[n];
    }

    /*printf("n:%llu - memo:%llu\n", n, memo[n]);*/
    return memo[n] = (fibo(n-1) + fibo(n-2)) % 100000007;
}


int main(){
    unsigned long long int n, t, i=0;
    memset(memo, -1, sizeof memo);

    scanf("%llu", &t);

    while(i<t){
        scanf("%llu", &n);
        printf("%llu\n", fibo(n));
        i++;
    }



    return 0;

}
easyFibonacci
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
Apr 10, 2019, 3:39 PM
valeu
consegui fazer o do osso
#include <stdio.h>

int main(void) {
  int i,j,k,n,m,a,b;
  int vm[1000004];
  int resposta = 1;
  int buraco  = 0;

  scanf("%d %d %d",&n,&m,&k);
  for(i=0;i<(n+2);i++) vm[i] = 0;

  for(i=0;i<m;i++){
    scanf(" %d",&j);
    vm[j] = 1;
  }
  if(vm[1] == 1){
    buraco = 1;
  }

  for(i=0;i<k;i++){
    scanf(" %d %d",&a,&b);
    if(buraco == 1){
      continue;
    }
    if(resposta == a){
      resposta = b;
    }else if(b == resposta){
      resposta  = a;
    }
    if(vm[resposta]){
      buraco = 1;
    }
  }
  printf("%d\n",resposta);



  return 0;
}
Fri 4:07 PM
#include <stdio.h>
#define MAX_N 26
#define MAX_VAL 1000001

int bloco[MAX_N], dp[MAX_VAL];

int min(int num1, int num2){
  if(num1 > num2)
    return num2;
  else
    return num1;
}

int min_bloco(int n, int m){
  int i, j;
  dp[0] = 0;

  for(i=1;i<= n;++i){
    dp[i] = MAX_VAL;

    for(j=0;j<m;++j){
      if(i >= bloco[j]){
        dp[i] = min(dp[i], dp[i-bloco[j]]+1);
      }
    }
  }

  return dp[n];
}


int main(void) {
  int t, n, m, b, res, j, i=0;

  scanf("%d", &t);


  while(i<t){
    scanf("%d %d", &n, &m);

    for(j=0;j<n;j++){
      scanf("%d", &b);
      bloco[j] = b;
    }

    res = min_bloco(m, n);
    printf("%d\n", res);

    i++;
  }

  return 0;
}
