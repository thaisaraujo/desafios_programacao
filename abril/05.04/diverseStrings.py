

def main():
    n = int(input())
    i = 0


    while(i<n):
        s = input() # string
        alf = [0] *26 # vetor de alfabeto
        maior = -1
        menor = 1000000
        res = -1;

    #    print(len(s))
    #    print(s)

        for k in range(len(s)):
            if(maior < ord(s[k])-97):
                maior = ord(s[k])-97
            if(menor > ord(s[k])-97):
                menor = ord(s[k])-97


            if(alf[ord(s[k])-97] == 0):
                alf[ord(s[k])-97] += 1
#                print('preenchi')
#                k+=1
#                print(k)
#                print(s[k])
            else:
            #    print(alf)
                res = 0
                break




    #    print(k)
        j = menor
        while(j <= maior):
            if(alf[j] == 1): j+=1
            else:
                res = 0
                break

        if(res == 0):
            print("No")
        else:
            print("Yes")

        i+=1

main()
