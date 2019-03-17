#!/usr/bin/python
#/usr/bin/python3.5

def main():
    a, b, i = 1, 1, 2
    n = input()

    if(int(n)==1):
        a=0
        b=1

    if(int(n)==2):
        a=1
        b=1

    if(int(n)!=1 and int(n)!=2):
        while(i<int(n)):
            temp = b
            b+=a
            a=temp
            i+=1


    print(str(a) + ' ' + str(b))


main()