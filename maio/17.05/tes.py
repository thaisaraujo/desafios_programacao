
banco = [0]*26
correta = [0]*26
erro = 20
pont = 0
certas = 0


entrada = input()
m, questao, resultado = entrada.split(' ')
m = int (m)

while(m != -1):
    if(resultado == "right"):
        banco[ord(questao)-65] += m
        correta[ord(questao)-65] =1
    else:
        banco[ord(questao)-65] += erro

    entrada = input()
    if(entrada == '-1'):
        break
    m, questao, resultado = entrada.split(' ')
    m = int (m)


#print(correta)
#print(banco)
for i in range (len(banco)):
    if(correta[i] != 0):
        pont += banco[i]
        certas+=1

print(str(certas) + ' ' + str(pont))
