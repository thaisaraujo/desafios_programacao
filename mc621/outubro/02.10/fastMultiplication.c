#include<stdio.h>
#include<math.h>

typedef long long int ll;

int quantidadeDigitos(ll l1, ll l2){
  int total1=1, total2=1;

  while(l1 >= 10 || l2 >= 10){

    if(l1 >= 10){
      l1 = l1/10;
      total1++;
    }
    
    if(l2 >= 10){
      l2 = l2/10;
      total2++;
    }

  }

  if(total1>total2){
    return total1;
  }else{
    return total2;
  }

}


// Método Karatsuba
ll multiplicar(ll l1, ll l2){
  ll p, q, r, s, pr, qs, y;
  ll tempPot, temp;
  int qtdDigitos;

  qtdDigitos = quantidadeDigitos(l1, l2);

  if(qtdDigitos <= 10){
    return l1*l2;
  }

  qtdDigitos = (qtdDigitos/2) + (qtdDigitos%2);


  tempPot = pow(10, qtdDigitos);

  p = l1/tempPot;
  q = l1 - (p*tempPot);
  r = l2/tempPot;
  s = l2 - (r*qtdDigitos);

  pr = multiplicar(q,s);
  qs = multiplicar(q+p, s+r);
  y = multiplicar(p,r);

  temp = pow(10,2*qtdDigitos);

  return pr + ((qs - pr - y)*tempPot) + (y*temp);

}




int main(){
  int t, qtdDigitos;
  ll l1, l2, res;

  scanf("%d", &t);

  while(t--){

    scanf("%lld %lld", &l1, &l2);

    //printf("tam1:%d - tam2:%d - l1:%lld - l2:%lld\n", qtdDigitos1, qtdDigitos2, l1, l2);
    res = multiplicar(l1, l2);
    printf("%lld\n", res);
  }

  return 0;

}