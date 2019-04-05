#!/usr/bin/python
#/usr/bin/python3.5

'''
Desafio G - Codeforces 769B
entrada: m - número de copos, n - número de buracos, k - número de trocas
saida: posicao final do osso
'''

def main():
    entrada = input()
    copos, m, k = (int(numero) for numero in entrada.split(' '))
    copos = [0]*copos

    buraco = input().split(' ')
    buraco = list(map(int, buraco))

    i = 0
    caiu = 0
    achei = 0
    copos[1] = 1 #primeira posicao

    print(copos)

  #  print(buraco)

    while(i<k):
        entrada = input()
        a,b = (int(numero) for numero in entrada.split(' '))
        print(i)
        print(a)
        print(b)

        if a not in buraco and achei == 0:
          copos[a] = 0
          copos[b] = 1
          caiu = b
        
        elif b not in buraco and achei == 0:
          copos[b] = 0
          copos[a] = 1
          caiu = a

        if caiu in buraco:
            achei = 1

        i+=1

    print(caiu+1)




main()