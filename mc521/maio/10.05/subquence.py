'''
desafio E - Increasing subsequenca (easy version)
'''
saida = []
lista = []


n = int(input())
lista = input()
lista = list(map(int, lista.split(" ")))
#cprint(lista)

ini = 0
fim = len(lista)-1
pos = 0



while(ini <= fim and max(lista[ini],lista[fim])>pos):

    #print(lista)

    if(lista[fim] < pos or lista[fim]>=lista[ini]>pos): # rightmost
        saida.append('L')
        pos = lista[ini] ##ultimo elemento verificado
        ini+=1

    else:
        saida.append('R')
        pos = lista[fim] #ultimo elemento verificado
        fim -=1
        #print(lista)



print(len(saida))
saidaS = ''.join(saida)
print(str(saidaS))
