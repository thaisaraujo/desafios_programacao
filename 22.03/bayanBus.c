#include<stdio.h>
#include<stdlib.h>
#define lin 4
#define col 12
#define linF 3

/* desafio B - Bayan Bus Codeforces 475A
 * Prioridades de preenchimento
 */

int main(){
  char bus[lin][col];
  int k, i=0, j=0;

  scanf("%d", &k);
  k+=1;


for(i=0;i<col;i++){
  for(j=0;j<lin;j++){
    
    if(j == 2 && i != 0){
      bus[j][i] = '.';
  /*    printf("%c ",bus[i][j]); */
    }

    if(k > 0 && bus[j][i] != 'O' && j != 2){
   /*   printf("k:%d - i:%d - j:%d\n",k,i,j);**/
      bus[j][i] = 'O';
      k--;
    }
    
    if(k > 0 && j == 2 && i == 0){
      bus[j][i] = 'O';
      k--;
    }

    if(k == 0){
      bus[j][i] = '#';
    }

  }
}



/*printf("k:%d\n", k);*/

printf("+------------------------+\n");

  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){

      if(j != 0 && j != col-1 && i == 2) /*corredor*/
        printf("..");

      else if(j == col-1 && i == 0) /*motorista*/
        printf("|D|)");

      else if(j == col-1 && i == lin-1)/*canto inferior direito*/
        printf("|.|)");

      else if(j == col-1 && i != 2)/*ultima coluna*/
        printf("|.|");

      else if(j == col-1 && i == 2) /*passagem do corredor*/
        printf("..|");

      else if(j == 0) /*primeira coluna*/
        printf("|%c.", bus[i][j]);

      else
        printf("%c.", bus[i][j]);
    }

    printf("\n");
  }
  printf("+------------------------+\n");



  return 0;
}
