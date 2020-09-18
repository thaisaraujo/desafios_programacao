#include<stdio.h>
#include<stdlib.h>

/* Desafio A - Divide it 
 * contas com quantos mov n == 1, dado que precisa ser divisil por 2 , 3 ou 5
 */


int dividir (long long int n){
int mov = 0;
    while(n != 1){
    
        if(n%2 == 0){
            n = n/2;
        }else if(n%3 == 0){
            n = 2*n/3;
        }else if(n%5 == 0){
            n = 4*n/5;
        }else{
            return -1;
        }
        mov++;
    }
    
    if(n == 1)
        return mov;


}


int main(){
    int q, i=0;
    long long int n;


    scanf("%d", &q);

    while (i<q){
        scanf("%lld",&n);

        printf("%d\n", dividir(n));

         i++;
    }
    
    return 0;
}