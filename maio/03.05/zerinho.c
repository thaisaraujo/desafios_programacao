/*
 * Desafio D - Zerinhou ou um
 */

 #include<stdio.h>


 int main(){
   int entrada, a, b, c;

   while(scanf("%d %d %d", &a, &b, &c) != EOF){

     if(a == b == c){
       printf("*\n");
     }else if(a != b && a != c && b == c){
       printf("A\n");
     }else if(b != a && b != c && a == c){
       printf("B\n");
     }else if(c != a && c != b && a == b){
       printf("C\n");
     }

   }

   return 0;
 }
