#include <cstdlib>
#include <iostream>

using namespace std;


/*

Desafio G - Codeforces 769B
entrada: m - número de copos, n - número de buracos, k - número de trocas
saida: posicao final do osso
 
*/


int main(){
   
    long m, n, k, u, v, b, i=0, achei=1, primeiro = 0;
    

    cin >> n >> m >> k;
    int copos[n+1] = {0};

  /*  for(i=0;i<=n;i++){
        cout<< copos[i];
    }

    cout << n;*/


    for(i=0;i<m;i++){      
        cin>>b;
        copos[b] = 1;
    }

    if(copos[1] == 1){
        primeiro = 1;
        
    }


    for(i=0;i<k;i++){
        cin>>u>>v;

        if(copos[achei] == 1 || primeiro == 1){
            continue;
        }

        if(u == achei){
            achei = v;
        }else if(v == achei ){
            achei = u;
        }

       

     /*   cout<<i;*/
    }


    cout<<achei<<"\n";

    return 0;

   

}