#!/usr/bin/python
#/usr/bin/python3.5

'''
Consecutive Numbers Gym - 101807C
q numero de perguntas
para cada q responder se x pode ser representado pela soma de pelo menos dois inteiros positvos consecutivo
'''

def main():
    q = int(input())
    soma = 0
    res = 0
    qtdNum = 0
    i = 0
    j = 1


    while(i<q):
        x = int(input())

        for j in range (x):
           soma+=j
           tent = soma
         

        if(res==1 and qtdNum >= 2):
            print('YES')
        else:
            print('NO')

        soma=0
        i+=1

  


main()