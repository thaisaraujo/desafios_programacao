#include<iostream>
#include<string>

using namespace std;    

int flag=0;

void imprimirLetra (char carac){

    if(carac == 'a' || carac == 'b' || carac == 'c'){

        
        if(flag == 1)
           cout << " ";
        
        if(carac == 'a')
           cout << "2";
        
        if(carac == 'b')
           cout << "22";

        if(carac == 'c')
           cout << "222";

        flag=1;
    }

    if(carac == 'd' || carac == 'e' || carac == 'f'){


        if(flag == 2)
           cout << " ";
        
        if(carac == 'd')
           cout << "3";
        
        if(carac == 'e')
           cout << "33";

        if(carac == 'f')
           cout << "333";

        flag=2;
    }

    if(carac == 'g' || carac == 'h' || carac == 'i'){

        
        if(flag == 3)
           cout << " ";
        
        if(carac == 'g')
           cout << "4";
        
        else if(carac == 'h')
           cout << "44";

        else if(carac == 'i')
           cout << "444";

        flag=3;
    }

    if(carac == 'j' || carac == 'k' || carac == 'l'){


        if(flag == 4)
           cout << " ";
        
        if(carac == 'j')
           cout << "5";
        
        else if(carac == 'k')
           cout << "55";

        else if(carac == 'l')
           cout << "555";

        flag=4;
    }

    if(carac == 'm' || carac == 'n' || carac == 'o'){


        if(flag == 5)
           cout << " ";
        
        if(carac == 'm')
           cout << "6";
        
        else if(carac == 'n')
           cout << "66";

        else if(carac == 'o')
           cout << "666";

        flag=5;
    }

  if(carac == 'p' || carac == 'q' || carac == 'r' || carac == 's'){


        if(flag == 6)
           cout << " ";
                
        if(carac == 'p')
           cout << "7";
        
        else if(carac == 'q')
           cout << "77";

        else if(carac == 'r')
           cout << "777";

        else if(carac == 's')
           cout << "7777";

        flag=6;
    }

    if(carac == 't' || carac == 'u' || carac == 'v'){


        if(flag == 7)
           cout << " ";
        
        if(carac == 't')
           cout << "8";
        
        else if(carac == 'u')
           cout << "88";

        else if(carac == 'v')
           cout << "888";

        flag=7;
    }

  if(carac == 'w' || carac == 'x' || carac == 'y' || carac == 'z'){


        if(flag == 8)
           cout << " ";
        
        if(carac == 'w')
           cout << "9";
        
        else if(carac == 'x')
           cout << "99";

        else if(carac == 'y')
           cout << "999";

        else if(carac == 'z')
           cout << "9999";

        flag=8;
    }

    if(carac == ' ' ){

        if(flag == 9)
           cout << " ";
        
        if(carac == ' ')
          cout << "0";

        flag=9;
    }
       
}


int main(){

   int n, i=0, j=0;
  

   cin >> n;
   cin.ignore();

      
    while(i<n){
         string mensagem;
         cout << "Case #" << i+1 << ':' << ' ';
         getline(cin, mensagem);

        while(j<mensagem.length()){
            imprimirLetra(mensagem.at(j));
            j++;
        }
      
      cout << '\n';
      j=0;
      i++;
    }


    return 0;
}

