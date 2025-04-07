#include "Pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void pilha_top(Pilha* pilha) {
	int aux = top(pilha);
	if(aux == -99) {
		cout << "Nao ha topo, pilha vazia!" << endl;
	} else {
		cout << "Topo: " << aux << endl;
	}
}

void pilha_pop(Pilha* pilha) {
	int aux = pop(pilha);
	if(aux == -99) {
		cout << "Falha ao realizar pop, pilha vazia!" << endl;
	} else {
		cout << "Pop (removido): " << aux << endl;
	}
}

void pilha_vazia(Pilha* pilha) {
	if(isEmpty(pilha)) {
		cout << "Sim, pilha esta vazia!" << endl;
	} else {
		cout << "Pilha nao esta vazia!" << endl;
	}
}

void pilha_size(Pilha* pilha) {
	int tamanho = size(pilha);
	cout << "Qtd pilha: " << tamanho << endl;
}


int main(int argc, char** argv) {
	
	Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
	inicializa(pilha);
	push(pilha, 5);
	imprimir(pilha);
	push(pilha, 3);
	imprimir(pilha);
	push(pilha, 8);
	imprimir(pilha);
	pilha_top(pilha);
	imprimir(pilha);
	pilha_pop(pilha);
	imprimir(pilha);
	pilha_size(pilha);
	pilha_pop(pilha);
	imprimir(pilha);
	pilha_pop(pilha);
	imprimir(pilha);
	pilha_pop(pilha);
	imprimir(pilha);
	pilha_vazia(pilha);
	push(pilha, 10);
	push(pilha, 12);
	imprimir(pilha);
	pilha_size(pilha);
	
	return 0;
}
