'''
Desafio G - silent classroom
minimizar a qtd de alunos com nomes parecidos em uma mesma salas
'''

n = int(input())
listaNomes = [0]*26
i = 0
res = 0

while(i<n):
    nome = input()
    listaNomes[ord(nome[0]) - 97] +=1 #armazenar a qtd de alunos que começa por cada letra
    i+=1


for i in range(26):
    salaUm = listaNomes[i] // 2
    salaDois = listaNomes[i] - salaUm
    res +=salaUm*(salaUm-1) // 2
    res +=salaDois*(salaDois-1) // 2


print(res)