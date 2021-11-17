#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.cpp"
#include <time.h>

//Sele??o1
int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, tam; 
	
//	Gerador();	
	
	printf("digite a potencia de 10 para o tamanho do array: ");

	scanf("%d", &tam);
	
	tam = pow(10,tam);

	A = (int*)malloc(tam*sizeof(int));

	srand(time(NULL));
	
	for (int j = 0; j < tam; j++){

		A[j] = rand()%tam;
		}
	
	
	quicksort(A, tam);
	
/*	for(int k = 0; k <tam; k++){
		printf("A[%i] = %i\n", k, A[k]);
	}*/
	
	printf("Esta funcao busca o i-esimo menor valor. Digite o valor de i: ");
	
	scanf("%i", &i);
	
	if (i <=0) return false;
	
	printf("O iesimo menor vetor do array e %i \n", A[i-1]);
	
	tFim = clock();
	
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	
	return 0;
}

