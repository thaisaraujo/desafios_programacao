#!/usr/bin/python
#/usr/bin/python3.5
'''
desafio G - Death Knight Hero - Kattis
batalha perdidade quando ocorre o ataca CD
'''


def main():
    i = 0
    n = int (input())
    perdida = 0

    while(i<n):
        batalha=input()

        if("CD" in batalha):
            perdida+=1

        i+=1

    ganhas = n-perdida

    print(ganhas)


main()