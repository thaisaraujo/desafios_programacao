#!/usr/bin/python
'''
desafio E
diferenca menor que 10^-6 - empate draw
Horsemeet Gym - 101954G

'''
def main():
    a = input()
    b = input()
    c = input()
    d = input()

    if((a+b)%2 == (c+d)%2):
        print('black')
    else:
        print('white')


main()

