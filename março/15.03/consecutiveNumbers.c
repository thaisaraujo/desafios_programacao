#include<stdio.h>
#include<stdlib.h>
#include<math.h>



/*
Desafio H
Consecutive Numbers Gym - 101807C
q numero de perguntas
para cada q responder se x pode ser representado pela soma de pelo menos dois inteiros positvos consecutivo

A soma de dois números consecutivos é ímpar, pois um deles deve ser par e outro ímpar. 
2 n = 2 n-1 + 2 n-1
*/

int consecutive (int number){
    int count=0;
    long long int soma=0;


    if(soma != number){
        for(i=1;i<number;i++){
            
            soma = (i+number/2)*

        }

    }else{
        return 1;
    }

    return -1;

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