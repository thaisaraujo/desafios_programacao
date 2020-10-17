#include <iostream>
#include <string>
using namespace std;


int main(){
  string drazil, dreamoon;
  int i(0), j(0), k(0), posCerta(0), qtdIncerteza(0), correto(0), prob(0);
 
  cin >> drazil >> dreamoon;

  for(i = 0; i < drazil.length(); i++){

    if(drazil[i] == '+'){
      posCerta += 1;
    }else if(drazil[i] == '-'){
      posCerta-=1;

    }
    
    if(dreamoon[i] == '+'){
      posCerta--;
    }else if(dreamoon[i] == '-'){
      posCerta++;
    }if(dreamoon[i] == '?'){
      qtdIncerteza++;
    }

  }

  //printf("%d %d %d\n", posCerta, posRel, qtdIncerteza);

  for(i=0;i < (1 << qtdIncerteza);i++){
    correto = posCerta;
    k = i;

    for(j=1; j <= qtdIncerteza; j++){
      correto += (k & 1) ? 1 : -1;
      k /=2;
    }

    prob += (correto == 0) ? 1 : 0;
  }

  qtdIncerteza = 1 << qtdIncerteza;
	cout.precision(15);
  cout << fixed << prob / double(qtdIncerteza) << endl;

  return 0;
}