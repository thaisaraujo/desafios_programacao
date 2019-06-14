#include<stdio.h>

/* Desafio B - MERGE it
 *
 */

int minimo(int a,int b){
    if(a < b)
        return a;
    else 
        return b;
}


int main(){
    int t, n, a, i, j, res, min;
    int div3[3];
    div3[0]=0;
    div3[1]=0;
    div3[2]=0;

    scanf("%d", &t);

    for(i=0;i<t;i++){
        
        div3[0]=0;
        div3[1]=0;
        div3[2]=0;

        scanf("%d",&n);

        for(j=0;j<n;j++){
            scanf("%d", &a);
            ++div3[a % 3]; /*contas divisores de 3*/
        }

        res = div3[0];
        min = minimo(div3[1], div3[2]);
        res += min;
        div3[1] -=min;
        div3[2] -= min;
        res += (div3[1]+div3[2])/3;
        printf("%d\n", res);

    }

    return 0;

}