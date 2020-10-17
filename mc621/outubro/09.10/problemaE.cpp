#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


int main(){

  int n, m, i;
  string jogador, direcao;
  vector <string> impostor;
  map <string, string> dados;

  cin >> n;
  cin >> m;

  for(i=0;i<n;i++){

    cin >> jogador;
    cin >> direcao;


    if((find(impostor.begin(), impostor.end(), jogador) == impostor.end())){

      //cout << "PROCURANDO IMPOSTOR\n";

      // garantir que primeiro mov eh sudoeste
      if(dados.count(jogador) == 0){
        dados.insert(pair<string, string> (jogador, "sudoeste"));
      }

      // verificar se tem mov repetido correto 
      if(dados[jogador] != direcao && dados[jogador] != "repetido"){
        impostor.push_back(jogador);
        cout << jogador << endl;
      }else if(dados[jogador] == "repetido"){
        dados[jogador] = direcao;
      }else{
        dados[jogador] = "repetido";
      }
    
    
    }else{
      //cout << "PROBLEMA\n";
    }
    

  }

  return 0;
  
}