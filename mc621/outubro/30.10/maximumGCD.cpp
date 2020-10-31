#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;


vector<int> paresAB (int n){
  vector<int> pares;

  if(n % 2 == 0){
    pares.push_back(n/2);
    pares.push_back(n);
  }

  else{
    pares.push_back((n-1)/2);
    pares.push_back(n-1);
  }

  return pares;
}

int GCD(int n){
  vector<int> ans = paresAB(n);
  int maxGCD = INT_MIN, a, b;
  a = ans[0];
  b = ans[1];

  maxGCD = max(maxGCD, __gcd(a,b));

  return maxGCD;
}


int main(){
  int t, n;

  cin >> t;
  while(t--){
    cin >> n;
    cout << GCD(n) << endl;
  }

  return 0;

}