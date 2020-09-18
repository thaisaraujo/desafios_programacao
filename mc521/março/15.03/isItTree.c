#include<stdio.h>
#include<stdlib.h>

/* Desafio E
 * Is it a tree - SPOJ
 */

#define MAX_N 10002

int pars[MAX_N];
 
void init(int n){
  int i;
  for(i=1;i<=n;i++){
    pars[i] = i;
  }
}

int getRoot(int x){
  return x == pars[x] ? : (pars[x]=getRoot(pars[x]));
}

int isSame(int x, int y){
  return getRoot(x) == getRoot(y);
}

void merge(int x, int y){
  pars[getRoot(x)] = getRoot(y);
}


int main(){
  int n, m, i, x, y;

  scanf("%d %d",&n,&m);

  if(n-1!=m){
    printf("NO\n");
    return 0;
  }

  init(n);

  for(i=0;i<m;i++){
    scanf("%d%d",&x,&y);
    merge(x,y);
  }

  for(i=1;i<n;i++){
    if(!isSame(i,n)){
      printf("NO\n");
      return 0;
    }
  }

  printf("YES\n");

  return 0;

}
