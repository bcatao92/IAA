#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.cpp"
#include <time.h>

//Sele?ao2(A,i)

int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, tam, d, q;
	//Gerador();	
	printf("Esta função gera arranjos aleatórios de acordo com dois numeros. Primeiro, insira um numero inteiro a seguir: ");
	scanf("%d", &d);
	printf("Agora insira uma potencia de 10 para multiplicar o inteiro inserido anteriormente: ");
	scanf("%d", &tam);
	tam = d*pow(10,tam);
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


