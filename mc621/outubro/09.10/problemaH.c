#include<stdio.h>
#include<string.h>



int main(){
  int p, a, l, i=0, j=0, k=0;

  char listanomes [10][21];
  char listarmas [10][21];
  char listalocais [10][21];
  char temp[21];

  if(scanf("%d %d %d", &p, &a, &l)==1);

  for(i=0;i<p;i++){
    if(scanf("%s", listanomes[i])==1);
  }

  for(i=0;i<a;i++){
    if(scanf("%s", listarmas[i])==1);
  }
  
  for(i=0;i<l;i++){
    if(scanf("%s", listalocais[i])==1);
  }

  for(i=0;i<p;i++){
    for(j=0;j<a;j++){
      for(k=0;k<l;k++){

        printf("Foi %s, com %s, %s\n", listanomes[i], listarmas[j], listalocais[k]);
      }
    }
  }



  /*
  while(p--){
    printf("%s\n", listanomes[p]);
  }

  while(a--){
    printf("%s\n", listarmas[a]);
  }

  while(l--){
    printf("%s\n", listalocais[l]);
  }*/


  return 0;

}