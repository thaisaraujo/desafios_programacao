#include<stdio.h>
#include<math.h>

int decompor(int number){
  int fator = 2

  while(number > 1){
    multiplo = 0;
    while(number % fator == 0){
      multiplo++;
      number = number / fator;
    }

    if(multiplo != 0)
      fator++;


}

int main(){
  int t, number, res, i=0;

  scanf("%d", &t);

  while(i,t){
    scanf("%d",&number);
    res = decompor(number);
    printf("%d\n",res);
    i++;

  }

  return 0;

}
