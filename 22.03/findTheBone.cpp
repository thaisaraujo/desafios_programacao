#include <cstdlib>
#include <iostream>

using namespace std;


/*

Desafio G - Codeforces 769B
entrada: m - número de copos, n - número de buracos, k - número de trocas
saida: posicao final do osso
 
*/

int main(){
   
    int m, n, k, u, v, i=0, achei=1, saidaUm=0, b, buraco = -1;

    cin >> n >> m >> k;
    cout << n;

    int copos[n+1] = {0};

    for(i=0;i<m;i++){
        cin>>b;
        copos[b] = 1;
    }

    if(copos[1] == 1){
        saidaUm=1;
        return 0;
    }

    b = 0;
    for(i=0;i<k;i++){
        cin>>u>>v;

        if(achei == u){
            achei = v;
        }else if(achei == v){
            achei = u;
        }

        if(copos[achei] == 1 and buraco == -1){
            b = achei;
            buraco = 4;
            break;
        }
      
            
        
        
     /*   cout<<i;*/
    }


    if(saidaUm != 0){
        cout<<1<<"\n";
    }else if(b != 0){
        cout<<b<<"\n";
    }else{
        cout<<achei<<"\n";
    }
   

}