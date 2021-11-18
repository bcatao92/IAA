#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "funcs.cpp"
#include <time.h>

//Sele?ao2(A,i)
int q, e, i;
int* A;

void troca(int* a, int* b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int* A, int e) {
  int pivot = A[e-1];
  int i = -1;
  int j;
  for(j = 0; j < e-1; j++)
    if(A[j] <= pivot)
      troca(&A[++i], &A[j]);
  troca(&A[i+1], &A[j]);

  return i + 1;
}

int Selecao2(int* A,int i, int e) {
	q = partition(A, e);
	if (e ==1){
		return A[0];
	}
	
	if (i < q){
		e = e-1;
		return Selecao2(A, i, q);
		}
		
	else { 
	if (i > q){
		return Selecao2(A,i, q);
	}
	}
	return A[q];
	}
	

int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, d, tam, e, iteracao;
	int* A; 
	iteracao = 0;

	for (tam = 2 ; tam <8; tam++){


	for (d = 1; d<=3; d++){
	if (d == 1){
	i = 25;}
	if (d == 2){
	i = 56;}
	if (d == 3) {
	i = 225;}
	
	e = d*pow(10,tam);
	
	A = (int*)malloc(e*sizeof(int));

	srand(time(NULL));
	
	for (int j = 0; j < e; j++){

		A[j] = rand()%e;
		}
	
	free(A);
	tFim = clock();
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	iteracao++;
	printf("\nIteracao %i\nMultiplicador do array: %i,\nTamanho do array: %i\nVetor i escolhido: %i \nTempo decorrido: %d milissegundos", iteracao, tam, e, i,tDecorrido);
	}
}
	return 0;
	}
