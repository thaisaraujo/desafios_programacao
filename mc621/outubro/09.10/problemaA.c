#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long int ll;

// Problema Josephus
ll josephus(ll n, ll k) {
    if (n == 1)
        return 0;
    if (k == 1)
        return n-1;
    if (k > n)
        return (josephus(n-1, k) + k) % n;
    ll cnt = n / k;
    ll res = josephus(n - cnt, k);
    res -= n % k;
    if (res < 0)
        res += n;
    else{
        res += res / (k - 1);
        printf("oi\n");
    }
    return res;
}

int main(){
  ll n, res;

  if(scanf("%llu", &n)==1);
  //printf("VALOR DE N:%llu\n", n);
  res = josephus(n,2)+1;
  printf("%llu\n", res);

}