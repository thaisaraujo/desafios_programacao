#!/usr/bin/python
#/usr/bin/python3.5

'''
Desafio C - SPOJ - CEQU
entrada: T número de casos; valores de a, b  e c
saida: informar se existe x e y que satisfaz a euação: ax + by = c
'''

def mdc(a, b):
    if(b == 0):
        return a
    return mdc(b, a%b)


def main():

    t = input()
    i = 0

    while(i<int(t)):
        entrada = input()
        a, b, c = (int(numero) for numero in entrada.split(' '))
      #  print('a:' + str(a) + ' b:' + str(b) + ' c:' + str(c))
        d = mdc(a,b)
        if(c > d):
            res = c % d
            if(res == 0):
                print('Case ' + str(i+1) + ': Yes')
            else:
                 print('Case ' + str(i+1) + ': No')
        else:
            res = d % c
            if(res == 0):
                print('Case ' + str(i+1) + ': Yes')
            else:
                 print('Case ' + str(i+1) + ': No')

        i+=1 




main()