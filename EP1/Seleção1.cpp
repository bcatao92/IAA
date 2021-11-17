#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.cpp"
#include <time.h>

//Sele??o1
int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, d, tam; 
	
	
//	printf("Esta função gera arranjos aleatórios de acordo com dois numeros. Primeiro, insira um numero inteiro a seguir: ");
	printf("Esta função gera arranjos aleatórios de acordo com dois numeros. Insira um numero inteiro, pressione enter, insira outro inteiro que sera a potencia de 10 que multiplicara o primeiro e pressione enter novamente: ");
	//scanf("%d", &d);
	scanf("%d", &d, &tam);
	
	//printf("Agora insira uma potencia de 10 para multiplicar o inteiro inserido anteriormente: ");
	
	//scanf("%d", &tam);
	
	tam = d*pow(10,tam);
	
	A = (int*)malloc(tam*sizeof(int));

	srand(time(NULL));
	
	for (int j = 0; j < tam; j++){

		A[j] = rand()%tam;
		}
	
	
	quicksort(A, tam);
	
	
	printf("Agora insira um numero i para que a funcao mostre o vetor correspondente no arranjo: ");
	
	scanf("%i", &i);
	
	if (i <=0) return false;
	
	printf("O iesimo menor vetor do array e %i \n", A[i-1]);
	
	tFim = clock();
	
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	
	return 0;
}


