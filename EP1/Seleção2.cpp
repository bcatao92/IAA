#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.cpp"
#include <time.h>

//Seleçao2(A,i)

int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, tam;
	//Gerador();	
	printf("digite a potencia de 10 para o tamanho do array: ");
	scanf("%d", &tam);
	tam = pow(10,tam);
	A = (int*)malloc(tam*sizeof(int));
	srand(time(NULL));
	for (int j = 0; j < tam; j++){
		A[j] = rand()%tam;
	}
	
	
		
	
	
	tFim = clock();
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	return 0;	
	}

