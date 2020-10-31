#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

typedef unsigned long long int ll;
typedef vector<int> vi;
typedef map<int, int> mii;

vi primeFactors (ll n){
  ll cont=0;
  vi factors;

  while(n % 2 == 0){
    cont++;
    n = n/2;
  }

  if(cont != 0){
    factors.push_back(cont);
  }

  for(ll i=3; i<= sqrt(n); i+=2){
    cont=0;
    while(n % i == 0){
      cont++;
      n /= i;
    }

    if(cont != 0){
      factors.push_back(cont);
    }
  }

  if(n > 1){
    factors.push_back(1);
  }

  return factors;

}

ll noPrimeDivisors(ll n){
  vi factors = primeFactors(n);
  ll noPrimes = 1;

  for(ll i=0; i < factors.size(); i++){
    noPrimes = noPrimes*(factors[i]+1);
  }

  return noPrimes - factors.size();
}

int main(){
  ll q, i;

  cin >> q;

  while(q--){
    cin >> i;
    printf("%lld\n", noPrimeDivisors(i));
  }


  return 0;
}