#include<iostream>

using namespace std;

/*
* Desafio J - Nauuo and Votes
* definr quem vai ganhar ou se tera empate ou de indefinido
*/



int maior(int a, int b){
  
    return a == b ? 2 : a < b;

}

int main(){
    int x,y,z, res;
    char saida [4] = {'+','-','0','?'};
    
    cin >> x >> y >> z;

    res = maior(x+z,y) == maior(x,y+z) ? maior(x,y) : 3;

    cout << saida[res];



    return 0;
}