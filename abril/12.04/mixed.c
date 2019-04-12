#include<stdio.h>
#include<math.h>

int main (){

  int deno, nume, number1, number2;

  scanf("%d %d",&nume, &deno);

  while(nume != 0 && deno != 0){

    number1 = nume / deno;
    number2 = nume % deno;

    printf("%d %d / %d\n", number1, number2, deno);

    scanf("%d %d",&nume, &deno);

  }

  return 0;
}
