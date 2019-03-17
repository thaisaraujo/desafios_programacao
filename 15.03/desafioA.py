#!/usr/bin/python
#/usr/bin/python3.5

import copy

def main():
    i = 0
    saida = -1
    lista = []

 
    n = input()
     

    while(i<int(n)):
        nome = input()
        lista.append(nome)
        i+=1

    cres=(lista.copy())

    cres.sort()
    descre = (cres.copy())
    descre.reverse()

   

    if(lista == cres):
        saida = 1

    if(lista == descre):
        saida = 2

    #SAIDA

    if(saida == -1):
        print("NEITHER")
    if(saida == 1):
        print("INCREASING")
    if(saida == 2):
        print("DECREASING")

   
main()