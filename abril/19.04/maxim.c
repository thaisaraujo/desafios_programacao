#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


/*
 * Desafio H - Maxim and Biology
 */

#define max 53

int dist(char letraE , char letraG){
    int dif1, dif2, primeira, segundo;
    primeira = (int)letraE;
    segundo = (int)letraG;

    dif1 = abs(primeira-segundo);
    dif2 = 26 - abs(segundo-primeira);

 //   printf("oii");

    if(dif1 < dif2)
        return dif1;
    else
        return dif2;   

   
}


int main(){
    int n, i, j, res=0, saida = 1000000;
    char palavra [max];
    char genome [4] = {'A', 'C', 'T', 'G'}; /*subtring*/

    scanf("%d", &n);
  //  printf("%d", n);
    scanf("%s", palavra);
  //  printf("%s", palavra);

 
    for(i=0;i<n-3;i++){
        res = 0;
     
        for(j=0;j<4;j++){ /*percorrer a subtring*/
          //  printf("i:%d - j:%d\n", i, j);
            res += dist(palavra[i+j], genome[j]);
        }

        if(res < saida){
            saida = res;
        }
    }

    printf("%d\n", saida);

return 0;
}



