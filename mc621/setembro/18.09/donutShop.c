#include<stdio.h>

typedef long long int ll;

//PASSOU =)

int loja1(ll a, ll c){  
  if(c <= a){  //loja1 não compenesa, pq o preço da caixa é menor que a unidade da loja1
    //printf("não vale a pena loja1\n");
    return -1; 
  }else{
    //printf("vale a pena loja1\n");
    return 1;
  }
}


ll loja2(ll a, ll b, ll c){
  ll precoCaixaLoja1 = a*b;
  //printf("%llu\n", precoCaixaLoja1);
  if(precoCaixaLoja1 > c){  //se o total da qtd de donuts na caixa é maior na loja1 que na loja2 --> menor pq se for iguak ao comprar mais uma unidade na loja2 sera necessario uma nova caixa
    //printf("vale a pena loja2\n");
    return b; //um dos valores valido para loja2 eh a qtd que esta na caixa
  }else{
    //printf("não vale a pena loja2\n");
    return -1;
  }
}

int main(){
  ll a, b, c, qtd2;
  int cases, qtd1;

  scanf("%d", &cases);

  for(int i=0;i<cases;i++){
    scanf("%lld %lld %lld", &a, &b, &c);
 
    qtd1 = loja1(a, c);
    qtd2 = loja2(a,b,c);
 
    printf("%d %lld\n", qtd1, qtd2);
  }
  return 0;
}