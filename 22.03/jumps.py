#!/usr/bin/python
#/usr/bin/python3.5
import os, sys

'''
desafio A
Jumps
x  ponto de chegada
n  quantidade de variacoes de dist
dist[n] as variacoes das dist
'''



def mdc(res, dist):
    if(dist == 0):
        return res
    return mdc(dist, res%dist)
  



def main():
    entrada = input()
    n, x = (int(numero) for numero in entrada.split(' '))
    i = 0
    res = 0

    dist = []
    dist = input().split(' ')
  #  print(dist)

    while(i<n):
        dist[i] = int(dist[i])
     #   print(dist[i])
        res = mdc(res, dist[i])
        i+=1


    if(x < 0):
        x = -x
    if(x % res == 0):
        print("YES\n")
    else:
        print("NO\n")



main()
