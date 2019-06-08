#include<bits/stdc++.h>
using namespace std;

/* Desafio L - Elevator Trouble
 * saida: qtd de mov do elevator se possivel
 */

int main(){

    int f,s,g,u,d;
    int visita[1000001];
    int dist[1000001];
    int subida, descida, mov;
    queue <int> andares;

    cin >> f >> s >> g >> u >> d;

    dist[g] = -1;

    visita[s]=1;
    dist[s]=0;
    andares.push(s);
   
   
    while (!andares.empty()){
        mov = andares.front();
        andares.pop();
        subida = mov + u;
        descida = mov - d;
      
        if(subida<=f && !visita[subida]){
            visita[subida] = 1;
            dist[subida] = dist[mov] + 1;
            andares.push(subida);
        }

        if(descida>=1 && !visita[descida]){
            visita[descida] = 1;
            dist[descida] = dist[mov] + 1;
            andares.push(descida);
        }
    }

    if(dist[g] == -1){
        cout << "use the stairs\n";
    }else{
        cout << dist[g];
    }
    


    return 0;
}
