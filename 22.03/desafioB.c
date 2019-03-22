#include<stdio.h>
#include<stdlib.h>
#define lin 4
#define col 12
#define linF 3

/* Prioridades de preenchimento
 *
 */

int main(){
  char bus[lin][col];
  int k, i, j;

  scanf("%d", &k);

for(i=0;i<lin;i++){
  for(j=0;j<col;j++){
    if(i == 2 && j != 0){
      bus[i][j] = '.';
    }
    bus[i][j] = '#';
  }
}



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
