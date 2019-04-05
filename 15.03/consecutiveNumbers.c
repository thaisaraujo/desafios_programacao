#include<stdio.h>
#include<stdlib.h>



/*
Desafio H
Consecutive Numbers Gym - 101807C
q numero de perguntas
para cada q responder se x pode ser representado pela soma de pelo menos dois inteiros positvos consecutivo

A soma de dois números consecutivos é ímpar, pois um deles deve ser par e outro ímpar. 
2 n = 2 n-1 + 2 n-1
*/

int consecutive (int number){
    int vetor [number];
    long long int soma;

    for(i=0;i<number/2;i++)
}

int main (){
    int q,i=0, res = 0;
    int long long number;

    scanf("%d",&q);


    while(i<q){
        scanf("%d", number);

        res = consecutive(number);

        if(res == 10)
            printf("yes");
        else
            printf("no");

    }
    return 0;
}