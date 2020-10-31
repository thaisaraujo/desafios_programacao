#include<iostream>
#include<map>
using namespace std;

typedef unsigned long long int ll;
#define M 1000000007; //modulo
map <ll, ll> fibonacci;


ll fib(ll n){
  if (fibonacci.count(n))
    return fibonacci[n];

  ll metade = n/2;

  if(n % 2 == 0){
    return fibonacci[n] = (fib(metade)*fib(metade) + fib(metade-1)*fib(metade-1)) % M;
  }else{
    return fibonacci[n] = (fib(metade)*fib(metade+1) + fib(metade-1)*fib(metade)) % M;
  }
  
}



int main(){

  ll n, res;
  fibonacci[0] = 1;
  fibonacci[1] = 1;

  cin >> n;

  if(n == 0){
    res = 0;
  }else{
    res = fib(n-1);
  }

 cout << res << endl;

  return 0;
}