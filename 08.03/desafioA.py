#!/usr/bin/python
#/usr/bin/python3.5

'''
Summing Digits - UVA 11332
'''


def main():
    entrada = (input())
    while(int(entrada) != 0):
        str(entrada)
        saida = (sum(int(i) for i in entrada))
      #  print('saida' + str(saida))
        
        while(saida > 9):
            saida = str(saida)
            saida = (sum(int(i) for i in saida))
    
        print(saida)    
        entrada = input()



main()
