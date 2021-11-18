#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int tam, i,d, q;
int *A;

void troca(int* a, int* b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void Gerador(int* A){
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


	
int Selecao1(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, d, tam; 
	
	
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
	
	
	quicksort(A, tam);
	
	
	printf("Agora insira um numero i para que a funcao mostre o vetor correspondente no arranjo: ");
	
	scanf("%i", &i);
	
	if (i <=0) return false;
	
	printf("%i", A[i-1]);
	
	tFim = clock();
	
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	
	return 0;
}


int Selec2(int* A,int i, int tam) {
	q = partition(A, tam);
	if (tam ==1){
		return A[0];
	}
	
	if (i < q){
		tam = tam-1;
		return Selecao2(A, i, q);
		}
		
	else { 
	if (i > q){
		return Selecao2(A,i, q);
	}
	}
	return A[q];
	}



int Selecao2(){
	
	clock_t tInicio, tFim, tDecorrido;
	
	tInicio = clock();
	int i, tam, d, q;
	
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
	
	printf("O valor do vetor procurado é %i", Selec2(A, i, tam));
	

	free(A);
	tFim = clock();
	tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));
	printf("\nTempo decorrido: %d milissegundos", tDecorrido);
	return 0;
	}



