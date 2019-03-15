#!/usr/bin/python
'''
diferenca menor que 10^-6 - empate draw

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

