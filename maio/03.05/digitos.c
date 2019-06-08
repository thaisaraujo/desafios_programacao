#include<stdio.h>
#include<stdlib.h>


int main(){
  int n, m, i, j, k, digitos, flag, numero, total=0;
  int vet[4]; 

  while ((scanf("%d %d", &n, &m))!= EOF){
    total = 0;
   
    for(i=n;i<=m;i++){ /*percorrer o intervalo*/
      digitos = 0; 
      flag = 0;
      numero = i;

      while(numero != 0){
        vet[digitos] = numero%10; /*armazenar o digito do numero*/
        numero/=10;
        digitos++;
      }

      for(j=0;j<digitos;j++){ /*verificar digito repetido*/
        for(k=j+1;k<digitos;k++){
          if(vet[j]==vet[k]){ /*reptido*/
            flag = 1;
          }
        }
      }

      if(flag == 0) 
        total++;
    }

    printf("%d\n", total);
    
  }


  
return 0;
}
