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


def sum(dist, n, x):
    if(x == 0):
        return True
    if(n == 0 and x!= 0):
        return False

    if(dist[n-1] > x):
        return sum(dist, n-1, x);

    return sum(dist, n-1, x) or sum(dist, n-1, x-dist[n-1])


def main():
    entrada = input()
    n, x = (int(numero) for numero in entrada.split(' '))
    i = 0

    dist = []
    dist = input().split(' ')

    while(i<n):
        dist[i] = int(dist[i])
        i+=1

    res = sum((dist), n, x)

    if(res == True):
        print("YES")
    else:
        print("NO")


main()
