#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Desafio G - filling shapes
 *
 */

int main(){
    int n;

    scanf("%d",&n);

    if(n%2==0){
        printf("%d\n", (int) pow(2,n/2));
    }else{
        printf("0\n");
    }

    return 0;
}