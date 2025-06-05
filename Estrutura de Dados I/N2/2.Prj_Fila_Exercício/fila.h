// fila.h

#include "lista.h"

No* inicializaFila();
No* enqueue(No* fila, int valor);
No* dequeue(No* fila);
void front(No* fila);
bool isEmpty(No* fila);
int size(No* fila);
void mostrar(No* fila);
