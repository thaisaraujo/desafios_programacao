#include<bits/stdc++.h>
using namespace std;
#define MAX 200000
typedef long long ll;


/* Desafio j - Maximal Continuous Rest
 * imprimir o temp max de descanso - maior sequencia de 1 - incluir a seq de dias
 */

int main(){

    int n, i, res = 0, ultimo = 1, hora, circular = 1;
    int seq[MAX];

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d", &hora);

        if(hora == 1){  /* armazenar apenas os dias de descanso na posicao correta na hora do dia */
            seq[ultimo]++;
        }else{
            ultimo++;
        }

        if(i == 1 && hora == 0){ /* contabilizar o dia seguinte*/
            circular = 0;
        }

        if(i == n && hora == 0){
            circular = 0;
        }

        res = max(res, seq[ultimo]);
    } 

    if(circular){
        res = max(res, seq[1] + seq[ultimo]);
    }


    printf("%d\n", res);


    return 0;
}