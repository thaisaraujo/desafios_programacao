#include <iostream>
#include <algorithm>
#define max 200000
using namespace std;

/* DESAFIO K - CUTTING OUT
 * maximar o vetor t, cortando os valores de s
 */


int main (){
    int l=1, r, meio, temp;
    int n, k, i, j, cont;
    pair<int, int> vetorS[max];

    for(i=1;i<=max;i++){
        vetorS[i] = {0,i};
    }

    cin >> n >> k;

    for(i=0;i<n;i++){
        cin >> temp;
        vetorS[temp].first++;
    }

    sort(vetorS+1,vetorS+max+1);
    reverse(vetorS+1,vetorS+max+1);

    r = n+1;

    while (l+1<r){
        meio = (l+r) / 2;
        cont = 0;

        for(i=1;i<=n;i++){
            cont +=vetorS[i].first/meio;
        }

        if(cont>=k)
            l=meio;
        else 
            r=meio;
    }

    cont=0;

    for(i=1;i<=n;i++){
        for(j=0;j<vetorS[i].first/l;j++){
            cout << vetorS[i].second << " ";
            cont++;
            if(cont>=k)
                break;
        }

        if(cont>=k)
            break;
    }

    cout << endl;
    
    return 0;
}
