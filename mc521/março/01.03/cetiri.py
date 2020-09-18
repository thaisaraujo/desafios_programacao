#!/usr/bin/python
#/usr/bin/python3.5
'''
desafio E - Cetiri Kattis
input: pa ordenada ou nao
outp: possiveis saidas
'''

def main():
    lista = []
    lista = input().split(' ')
    i=0

    while(i<3):
        lista[i] = int(lista[i])
        i+=1


    lista.sort()



    if lista[2]-lista[1] == lista[1]-lista[0]:
        saida = lista[2] + abs(lista[2]-lista[1])
    
    elif lista[2]-lista[1] > lista[1]-lista[0]:
        saida = lista[1] + abs(lista[1]-lista[0])

    else:
        saida = lista[0] + abs(lista[2]-lista[1])


    print(saida)

main()