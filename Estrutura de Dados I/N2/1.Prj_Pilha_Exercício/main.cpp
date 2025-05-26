#include "pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	No* pilha = inicializaPilha();
	
	pilha = push(pilha, 5);
	mostrar(pilha);
	
	pilha = push(pilha, 3);
	mostrar(pilha);
	
	pilha = pop(pilha);
	
	pilha = push(pilha, 7);
	mostrar(pilha);
	
	pilha = pop(pilha);
	
	top(pilha);
	
	pilha = pop(pilha);
	
	pilha = pop(pilha);
	
	if(isEmpty(pilha)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	
	pilha = push(pilha, 9);
	mostrar(pilha);
	
	pilha = push(pilha, 7);
	mostrar(pilha);
	
	pilha = push(pilha, 3);
	mostrar(pilha);
	
	pilha = push(pilha, 5);
	mostrar(pilha);
	
	cout << "Tamanho: " << size(pilha) << endl;
	
	pilha = pop(pilha);
	
	pilha = push(pilha, 8);
	mostrar(pilha);
	
	pilha = pop(pilha);
	
	pilha = pop(pilha);
	
	system("pause");
	return 0;
}
