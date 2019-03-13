#include<stdio.h>
#include<stdlib.h>

/*#include<vector.h>

  n barras
  m diferentes cupons
  saída: menor valor a se pagar
*/

#define ll long long int

void merge(int ini, int m, int final, long long int v[]){
	int i, j, k;
	int tam1 = m - ini + 1;
	int tam2 = final - m;

	int vet1[tam1], vet2[tam2];

	for(i=0;i<tam1;i++){
		vet1[i] = v[ini+i];
	}
	for(j=0;j<tam2;j++){
		vet2[j] = v[m+1+j];
	}

	i=0, j=0,k=ini;

	while(i<tam1 && j<tam2){
		if(vet1[i]>=vet2[j]){
			v[k] = vet1[i];
			i++;
		}else{
			v[k] = vet2[j];
			j++;
		}
		k++;
	}

	while(i<tam1){
		v[k]=vet1[i];
		i++;
		k++;
	}

	while(j<tam2){
		v[k]=vet2[j];
		j++;
		k++;
	}
}


void mergesort(int ini, int final, long long int v[]){

	 if(ini < final){
		
		int m = ini+(final-ini)/2;
		mergesort(ini,m,v);
		mergesort(m+1,final,v);
		merge(ini,m,final,v);
	}
}


int main(){	
	int n, m, i, casos=0, c;
	ll *vetB, somaB=0;

	scanf("%d",&n);

	vetB = (ll *)malloc(n*sizeof(ll));

	for(i=0;i<n;i++){
		scanf("%lli",&vetB[i]);
		somaB=somaB+vetB[i];
	}

	mergesort(0,n-1,vetB);

/*
	for(i=0;i<n;i++){
		printf("%d ", vetB[i]);
	}

	printf("\n"); */
	scanf("%d",&m);


	while(casos < m){

		scanf("%d",&c);

	/*	printf("%d\n", vetB[c-1]); */
		printf("%lli\n",somaB-vetB[c-1]);
		casos++;
	}

  return 0;

}



