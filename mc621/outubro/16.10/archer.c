#include<stdio.h>
#include<stdlib.h>


int main(){
  float a, b, c, d;
  float numerador, parcialAD, parcialAC, parcialBC, res;

  scanf("%f %f %f %f", &a, &b, &c, &d);
 
  parcialAD = a*d;
  parcialAC = a*c;
  parcialBC = b*c;
  res = parcialAD/(parcialAD-parcialAC+parcialBC);
  printf("%f\n", res);


  return 0;

}