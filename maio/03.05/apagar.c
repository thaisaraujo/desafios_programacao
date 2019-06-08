#include<stdio.h>
#include<stdlib.h>

#define max 100100

/* Desafio B - apagando e ganhando
 * apagar d digitos e maximar a variavel numero com n digitos
 */

int main(){
    int d, n, i, indice, apagados;
    char vet[max], numero;

  
    while(scanf("%d%d", &n, &d) && (n+d)){
      /*  vet = (char *)malloc(d*sizeof(char));*/
       
       apagados=0;

        for(i=0, indice=-1;i<n;i++){

            scanf(" %c", &numero);
           /* printf("numero:%c - indice:%d\n", numero, indice);*/

            while (indice > -1 && apagados < d && numero > vet[indice]){
                indice--;
                apagados++;
              /*  printf("numero:%d - vet[%d]:%d\n", numero, indice, vet[indice]);*/
            }

            
            if(indice+1 < n-d)
                vet[++indice] = numero;
            
        }


        vet[++indice]='\0';

           
      printf("%s\n", vet);
        
     


    }
    
}