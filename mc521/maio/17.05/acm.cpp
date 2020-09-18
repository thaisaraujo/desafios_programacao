#include<bits/stdc++.h>

/* desafio a - acm contest scoring
 * computador os pontos de uma equipe
 */

using namespace std;

struct questao{
    bool correta = false;
    int ponto = 0;
};

int main(){
    map < char, questao> banco;
    int m, certas = 0, total = 0;
    char letra;
    string resultado;

    while(cin >> m  && m != -1){
        cin >> letra >> resultado;

        if(resultado == "right"){
            banco[letra].correta = true;
            banco[letra].ponto +=m; 
        }else{
            banco[letra].ponto +=20;
        }

    }

    for(auto i : banco){
        if(i.second.correta){
            certas++;
            total +=i.second.ponto;
        }
    }


    cout << certas << " " << total << endl;

}