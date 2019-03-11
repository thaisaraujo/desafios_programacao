#include<stdio.h>
#include<math.h> 

int main(){

	int r, c, zr, zc;
	char carc;

	scanf("%d %d %d %d", &r, &c, &zr, &zc);


	char **m = (char**)malloc((r*zr)*sizeof(char*)); 

	//matriz expandida
	for(int i=0; i<r;i++){
		m[i] = (char*)malloc((c*zc)*sizeof(char));
	}

	/*montando a matriz*/
	for(int i=0;i<r,i++){
		for(int j=0;j<c;j++){
			scanf("%c",&carc);
			m[i][j] = carc;

			for(int k=i;k<zr;)

		}
	}

}