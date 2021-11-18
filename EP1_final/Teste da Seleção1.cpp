#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Sele??o1
int *A;
int q, i, d, tam;
int e;


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
void quicksort(int* A, int e) {
  int q;
  if (e > 0) {
    q = partition(A, e);
    quicksort(A, q);
    quicksort(&A[q+1], e - (q + 1));
    }
}



int main(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, d, tam, iteracao, e;
	int* A; 
	
	iteracao = 0;	
	for (tam = 2 ; tam <9; tam++){
	
	for (d = 1; d <=3; d++){

	if (d == 1){
	i = 25;}
	if (d == 2){
	i = 56;}
	if (d == 3) {
	i = 225;
	}
		
	e = d*pow(10,tam);
	
	A = (int*)malloc(e*sizeof(int));

	srand(time(NULL));
	
	for (int j = 0; j < e; j++){

		A[j] = rand()%e;
		}
	
	
	quicksort(A, e);
	
	tFim = clock();
	
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	iteracao++;
	printf("\nIteracao %i\nMultiplicador do array: %i,\nTamanho do array: %i\n Vetor i escolhido: %i \n Tempo decorrido: %d milissegundos", iteracao, tam, e, i,tDecorrido);
	}
	
	}
	return 0;
}

