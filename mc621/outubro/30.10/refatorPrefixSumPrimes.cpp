#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

//PASSOU


int main(){
  int n, i, qtdUm=0, qtdDois=0, ultimo=0;
  int sequenciaUm, sequenciaDois;
  vector<int>tiles, res;

  cin >> n;

  while (n--){
    cin >> i;
    tiles.push_back(i);

    if(i == 1){
      qtdUm++;
    }else{
      qtdDois++;
    }

  }

  //cout << "qtdUm:" << qtdUm << " qtdDois:" << qtdDois << " " << tiles[0] << " " << tiles.size() << endl;

  if((qtdUm == 0 && qtdDois != 0) || (qtdUm != 0 && qtdDois == 0)){
    //printf("TODOS 1 OU TODOS 2!!\n");
    for(int j = 0; j < tiles.size(); j++){
      cout << tiles[j] << " ";
    }
    cout << endl;

  }else{
    /*
    //cout << "OUTRAS OPÇÕES!!";
    if(qtdUm < 3){
    //cout << "MENOS QUE TRÊS UNS!!" << endl;    
      if(qtdUm == 1 && qtdDois == 1){
        cout << 2 << " " << 1 << endl;
      }

      else if(qtdUm == 1 && qtdDois == 2){
          cout << 2 << " " << 1 << " " << 2 << endl;
      }

      else if(qtdUm == 2 && qtdDois == 1){
          cout << 2 << " " << 1 << " " << 1 << endl;
      }

    }else{*/
      
      if(qtdDois > 0){
        cout << 2 << " ";
        qtdDois--;
      }

      if(qtdUm > 0){
        cout << 1 << " ";
        qtdUm--;
      }

      while(qtdDois--){
        cout << 2 << " ";
      }

      while(qtdUm--){
        cout << 1 << " ";
      }

      cout << endl;
    }

    /*
    for(int m = 0; m < res.size(); m++){
      cout << res[m] << " ";
    }
    cout << endl;*/
    
    //cout << "\nACABOU"<< endl;

  
  return 0;
}