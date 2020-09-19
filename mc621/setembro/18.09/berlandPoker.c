#include<stdio.h>
#include<math.h>

// n cards, m jorkers, k players (n % k == 0)
// cada jogador ganha n/k cartas - não sobraram cartas
// jogador que tive mais jorkes ganha - pontução: x - y - x eh qtd de jorkers na sua mão e y dos demias
// se dois ou mais jogadores estiverem com numero max de jokers todos são vencedores e recem 0 pontos


int main(){
  int t, n, m, k;
  int cartasPorJogador, pontosMax=0, jorkersRestantes, jogadoresRestantes;
  float div;

  scanf("%d", &t);

  for(int i=0; i<t; i++){
    scanf("%d %d %d", &n, &m, &k);
    cartasPorJogador = n/k;

    if(cartasPorJogador >= m){ //cartasPorJOgador for igual a qtd de jorkers --> um jogador pode ganhar todos os jorkes
      pontosMax = m;
    }

    if(cartasPorJogador < m){ //cartasPorJogador menor q qtd de jorkes --> necessariamente mais tem uma pessoa recebe jorkers

      jorkersRestantes = m-cartasPorJogador; //quantidade de jorkers que sobrou, depois que uma pessoa recebe todso jorkers possivel
      jogadoresRestantes = k-1; 
      div = ceil(((float)jorkersRestantes/jogadoresRestantes));  //dividir os jorkers restantes pelos demais jogadores

      //printf("jorkersRestante:%d - jogadoresRestantes:%d\n\n", jorkersRestantes, jogadoresRestantes);

        pontosMax = cartasPorJogador - div;

    }

    if(m == 0){  //caso que nao tem jorkes 
      pontosMax = 0;
    }
    printf("%d\n", pontosMax);

  }


  return 0;
}
