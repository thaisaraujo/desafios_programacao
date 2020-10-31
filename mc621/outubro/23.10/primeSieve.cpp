#include<iostream>
#include<vector>
#include<map>
#include<bitset>
using namespace std;

/* 
 * repositório professor aula 23/10/2020
 */


typedef unsigned long long int ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset <10000010>  bs ;
vi primes;


//CRIVO DE ESRATOSTENES

void sieve(ll upperbound){
  _sieve_size = upperbound+1;
  bs.set();
  bs[0] = bs[1] = 0;

  for(ll i=2; i<= _sieve_size; i++){
    
    if(bs[i]){
      
      for(ll j=i*i; j<= _sieve_size; j+=i){
        bs[j]=0;
      }
      primes.push_back((int)i);
    }
  }
}

bool isPrime(ll n){
  if(n <= _sieve_size)
    return bs[n];

  for(int i=0; i < (int)primes.size(); i++){
    if(n % primes[i] == 0)
      return false;
  }
  return true;  
}


//FACTORES BY PRIMES

ll primeFactors(ll n){
  vi factors;
  ll small = 100000000;
  ll pf_idx = 0;
  ll pf = primes[pf_idx];

  while( n != 1 && (pf*pf <= n)){
    while(n % pf == 0){
      n /= pf;
      
      if(small > pf){
        small = pf;
      }
      factors.push_back(pf);
    }
    pf = primes[++pf_idx];
  }

  if(n != 1){
    if(small > n){
      small = n;
    }
    factors.push_back(n);
  }

  return small;
}



int main ( ){
  sieve (10000000);
  ll input;
 
  cin >> input;
  

  while(input != 0){
    printf("%lld\n",primeFactors(input));
     cin >> input;
  }



  return 0;
}