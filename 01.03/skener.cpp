#include<iostream>
#include<vector>

using namespace std;

/* Desafio A - Skener Kattis*/

int main(){
    int r, c, zr, zc;
    cin >> r >> c >> zr >> zc;

    vector<vector<char>> v;

    v.resize(r);

    for(auto &row : v ){
        row.resize(c);
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> v[i][j];
        }
    }


    for(int i=0;i<r*zr;i++){
        for(int j=0;j<c*zc;j++){
            cout << v[i/zr][j/zc];
        }

        cout << endl;
    }

    cout << endl;   


}