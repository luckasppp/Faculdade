// pilha.h

#include <stdlib.h>
#include <iostream>
#include "lista.h"

/* Funcoes auxiliares */
No* inicializaPilha();
int size(No* pilha);
bool isEmpty(No* pilha);

/* Funcoes de insercao/remocao */
No* push(No* topo, int pilha);
No* pop(No* pilha);

/* Funcoes de impressao */
void mostrar(No* pilha);
void top(No* pilha);

