'''
 Desafio A - Restoring Three Numbers
 '''

entrada = []
entrada = input()

entrada = entrada.split(" ")
entrada = list(map(int, entrada))  #inteiros
#print(entrada)

entrada.sort()

#print(entrada)

a = entrada[3] - entrada[2] 
b = entrada[0] - a
c = entrada[2] - b


print(c, b, a)




