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

