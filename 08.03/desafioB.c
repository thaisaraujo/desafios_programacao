#include<stdio.h>

/*
 Parking - UVA 11364
*/

int main(){

	int casos, qtdLojas, loja, min, max, minTemp, k=0;
	int i, j;

	scanf("%d",&casos);

	while(k<casos){


		for(i=0;i<casos;i++){ 
			scanf("%d",&qtdLojas);
			scanf("%d",&minTemp);
			max=minTemp;
			min=max;			

			for(j=0;j<qtdLojas-1;j++){ 
				scanf("%d", &loja);
				if(loja<min){
					min=loja;
				}if(loja>max){
					max=loja;
				}		
			}


			printf("%d\n",2*(max-min));
			k++;

		}



	}

	return 0;

}
