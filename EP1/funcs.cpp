#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int tam, i;
int *A;

void troca(int* a, int* b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int Gerador(){
	printf("digite a potencia de 10 para o tamanho do array: ");

	scanf("%d", &tam);

	tam = pow(10,tam);

	A = (int*)malloc(tam*sizeof(int));

	srand(time(NULL));
	
	for (int j = 0; j < tam; j++){

		A[j] = rand()%tam;
	}
}



int partition(int* A, int tam) {
  int pivot = A[tam-1];
  int i = -1;
  int j;

  for(j = 0; j < tam-1; j++)
    if(A[j] <= pivot)
      troca(&A[++i], &A[j]);
  troca(&A[i+1], &A[j]);

  return i + 1;
}

void quicksort(int* A, int tam) {
  int q;
  if (tam > 0) {
    q = partition(A, tam);

    quicksort(A, q);
    quicksort(&A[q+1], tam - (q + 1));
    
  }
}
