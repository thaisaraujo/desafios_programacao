#include<stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d",&a, &b);
    scanf("%d %d",&c,&d);

    if((a+b)%2==(c+d)%2){
        printf("black\n");
    }else{
        printf("white\n");
    }
}