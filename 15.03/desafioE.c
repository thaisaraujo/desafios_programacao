#include<stdio.h>
#include<stdlib.h>


int main(){
  int *tree, n, m, u, i=0;

  scanf("%d %d",&n,&m);

  tree =(int *)malloc((m*2)*sizeof(int));

  while(i<m*2){
    scanf("%d",&u);
    tree[i]=u;
    i++;
  }


  return 0;

}
