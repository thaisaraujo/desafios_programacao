'''
Desafio K
'''

def reverse(b):
    str = ""
    for i in b:
        str = i + str
    return str

n = int(input())
bi = format(n,'b')
bi = reverse(bi)
bi = int(bi,2)
print(bi)
