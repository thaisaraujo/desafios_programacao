
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>

/*
 * Desfio A - Restoring Three Numbers
 */
using namespace std;


int main(){
    vector <int> entrada(4);
    int a,b, c, i;

    for(i=0;i<4;i++)
        scanf("%d",&entrada[i]);
    
    sort(entrada.begin(), entrada.end());


    a = entrada[3] - entrada[2];
    b = entrada[3] - entrada[1];
    c = entrada[3] - entrada[0];

    printf("%d %d %d\n", a, b, c);


    return 0;
}