#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.cpp"
#include <time.h>

//Sele?ao2(A,i)

int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, tam, q;
	//Gerador();	
	printf("Esta função gera arranjos aleatórios baseados baseados em potências de 10 e encontra um número baseado num índice escolhido pelo usuário. Comece escolhendo o expoente de 10 que dará o tamanho do arranjo: ");
	scanf("%d", &tam);
	tam = pow(10,tam);
	A = (int*)malloc(tam*sizeof(int));
	srand(time(NULL));
	for (int j = 0; j < tam; j++){
		A[j] = rand()%tam;
	}
	
	printf("Agora insira o índice do vetor procurado: ");
	
	scanf("%i", &i);
	
	printf("%i", Selecao2(A, i, tam));
	
	free(A);
	tFim = clock();
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	return 0;	
	}


