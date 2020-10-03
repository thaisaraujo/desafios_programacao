#include <iostream>
using namespace std;

#define MAX 160

int multiplicar(int digitos[], int qtdDigitos, int i);


void fatorial(int n){
  int digitos[MAX];
  int qtdDigitos = 1;
  digitos[0]=1;

  for(int i=2; i<=n; i++){
    qtdDigitos = multiplicar(digitos, qtdDigitos, i);
  }

  for(int j=qtdDigitos-1; j>=0; j--){
    cout << digitos[j];
  }
    cout << endl;
}


int multiplicar(int digitos[], int qtdDigitos, int i){
  int carry=0;

  for(int j=0; j<qtdDigitos; j++){
    int mult = digitos[j]*i + carry;
    digitos[j] = mult % 10; 
    carry = mult / 10;
  }

  while(carry){
    digitos[qtdDigitos] = carry % 10;
    carry = carry / 10;
    qtdDigitos++;
  }

  return qtdDigitos;
}

int main(){
  int t, n;

  cin >> t;

  while(t--){
    cin >> n;

   fatorial(n);
  }
}