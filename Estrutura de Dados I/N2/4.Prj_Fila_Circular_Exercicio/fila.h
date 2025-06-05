// fila.h

#include <iostream>
#include <cstdlib>
#include "lista_circular.h"

/* Funcoes auxiliares */
No* inicializaFila();
bool isEmpty(No* fila);
int size(No* fila);

/* Funcoes de insercao/remocao */
No* enqueue(No* fila, int valor);
No* dequeue(No* fila);
No* liberar_recursivo_fila(No* fila);

/* Funcoes de impressao */
void imprimir(No* fila);
void front(No* fila);
void last(No* fila);
