#include<stdio.h>
#include<string.h>
#define max 100

/* Desafio L - A pile of stones
 *  retornar o minimo de pedra que ficou apo as operações
 */

int returnMax(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    int n, i, stone=0, final=0;
    char op [max];

    scanf("%d", &n);
    scanf("%s", op);

    for(i=n-1;i>=0;i--){ 
        if(op[i] == '-')
            stone--;
        else{
            stone++;
        }

        final = returnMax(stone,final);

    }

   
 
    printf("%d\n", final);



    return 0;

}