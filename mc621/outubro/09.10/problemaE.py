n, m = input().split()

n = int(n)
m = int (m)

listanomes = []
impostor = []
dados = [[] for _ in range(m)]


while(n):
  jogador, direcao = input().split()

  if(not jogador in listanomes):
    listanomes.append(jogador)

  indice = listanomes.index(jogador)

  if(len(dados[indice]) == 0):
    dados[indice].append("sudoeste") #primeiro movimento para sudoeste

  if(not jogador in impostor):

    # garantir que sai primeiro do sudoeste
    if((len(dados[indice]) == 1) and (direcao == "norte" or direcao == "sudeste")):
        #print("PRIMEIRO MOV ERRADO - " + str(jogador))
        impostor.append(jogador) 
        print(jogador)
    
    # demais possibilidade para impostor
    ultimo = len(dados[indice]) - 1
    #print(dados[indice][ultimo])

    if(direcao != dados[indice][ultimo] and dados[indice][ultimo] != "centro"):
      #print("JOGADOR: " + str(jogador) + " IMPOSTOR " + str(impostor))
      if(not jogador in impostor):
        impostor.append(jogador)
        print(jogador)

    elif(dados[indice][ultimo] == "centro") :
      dados[indice].append(direcao)
    
    else:
      dados[indice].append("centro")


  n-=1

'''
for nome in impostor:
  print(nome)
'''


