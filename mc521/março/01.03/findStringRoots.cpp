#include<iostream>
#include<vector>
#include <string>

using namespace std;

#define max 100000

/*
 * Desafio I - Find string roots spoj-findsr
 * 
 */


int main(){
    int alfa[26] = {0}, number[10] = {0};
    int tam, i, pos, n=0;
    string entrada;
    
    while(entrada[0] != '*'){
        cin >> entrada;
        tam = entrada.size();


        for(i=0;i<tam;i++){
            pos = int(entrada[i])-97;

            if(typeid(entrada[pos]))

            alfa[pos]+=1;

            if(alfa[pos]!=0){
                n++;
            }
        
        }

        cout << n << '\n';
     
        n = 0;
        alfa[26] = {0};
        number[10] = {0};
        
    }


}