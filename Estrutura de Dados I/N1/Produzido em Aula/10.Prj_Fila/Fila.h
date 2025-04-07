// Fila.h

#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct _fila {
	int qtd;
	int* queue;
} Fila;

int size(Fila* fila);
bool isEmpty(Fila* fila);
void inicializa(Fila* fila);
void enqueue(Fila* fila, int valor);
int dequeue(Fila* fila);
int front(Fila* fila);
void imprimir(Fila* fila);
