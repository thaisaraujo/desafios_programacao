#!/usr/bin/python
#/usr/bin/python3.5

'''
Desafio H
Consecutive Numbers Gym - 101807C
q numero de perguntas
para cada q responder se x pode ser representado pela soma de pelo menos dois inteiros positvos consecutivo

A soma de dois números consecutivos é ímpar, pois um deles deve ser par e outro ímpar. 
2 n = 2 n-1 + 2 n-1
'''

def soma(x):
    return ((x & (x-1)) and x)

    
def main():
    q = int(input())
    i = 0


    while(i<q):
        x = int(input())

        res = soma(x)

        if(res == False):
            print("NO")
        else:
            print("YES")      
                    
        i+=1
    

main()