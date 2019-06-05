#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef unsigned long long int ll;

/* Desafio B - primo or not spoj
 * MillerRabin
 */

ll modDois(ll a, ll b, ll c){
    ll x, y;

    x = 0;
    y = a % c;

    while(b>0){
        if(b%2)
            x = (x+y) % c;
        y=(y*2) % c;
        b /=2;
    }

    return x%c;
}

ll modulo( ll a , ll b, ll c){
    ll x, y;

    x = 1;
    y = a % c;

    while(b > 0){
        if(b % 2)
            x = modDois(x,y,c);
        y = modDois(y,y,c);
        b /=2;
    }

    return x % c;
}


int testprimo(ll number, int inter){
    ll divisor, i, mod, a, temp;
        
    if(number < 2 ) 
        return FALSE;

    if(number % 2 == 0 && number != 2)
        return FALSE;

    divisor = number - 1;

    while(divisor % 2 == 0)
        divisor /=2;
    
    for(i=1;i<=inter;i++){
        a = rand() % (number-1)+1;
        temp = divisor;
        mod = modulo(a, temp, number);

        while(mod != 1 && mod != number-1 && temp != number-1){
            mod = modDois(mod,mod,number);
            temp*=2;
        }

        if(temp % 2 == 0 && mod != number-1)
            return FALSE;
    }
    
    return TRUE;
}

int main(){
    int n, i=0, res = 0;
    ll number;
    int inter = 50;


    scanf("%d", &n);

    while(i<n){
        scanf("%llu",&number);
      /*  printf("number: %llu\n", number);*/
        res = testprimo(number, inter);

        if(res != 0){
            printf("%llu is a prime\n", number);
        }else{
            printf("%llu is not a prime\n", number);
        }

        i++;

    }

    return 0;
}