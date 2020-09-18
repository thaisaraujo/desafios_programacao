#include <stdio.h>

int main(void) {
  int n,resp = 1,mod = 1;
  while(scanf(" %d",&n) != EOF){
    while(mod%n!= 0){
      mod = (10*mod+1)%n;
      resp += 1;
    }
    printf("%d\n",resp);
    resp = 1;
    mod = 1;
  }

  return 0;
}
