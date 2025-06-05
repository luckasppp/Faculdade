#include "lista_dupla.h"

using namespace std;

int main(int argc, char** argv) {

	No* lista = inicializa();

	imprime(lista);

	if(vazia(lista)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}

	cout << "Quantidade: " << quantidade(lista) << endl;

	lista = insere_inicio(lista, 1);
	imprime(lista);

	lista = insere_inicio(lista, 3);
	imprime(lista);

	lista = insere_inicio(lista, 5);
	imprime(lista);

	lista = insere_inicio(lista, 7);
	imprime(lista);

	cout << "Quantidade: " << quantidade(lista) << endl;

	lista = insere_fim(lista, 2);
	imprime(lista);

	lista = insere_fim(lista, 4);
	imprime(lista);

	lista = insere_fim(lista, 6);
	imprime(lista);

	lista = insere_fim(lista, 8);
	imprime(lista);

	cout << "Quantidade: " << quantidade(lista) << endl;

	cout << "Inicio: "; imprime_inicio(lista);

	cout << "Fim: "; imprime_fim(lista);

	No* busc = busca(lista, 0);
	if(busc==NULL) {
		cout << "Valor nao encontrado." << endl;
	} else {
		cout << "Valor encontrado: " << busc->info << endl;
	}

	busc = busca(lista, 3);
	if(busc==NULL) {
		cout << "Valor nao encontrado." << endl;
	} else {
		cout << "Valor encontrado: " << busc->info << endl;
	}

	imprime_reverso(lista);

	lista = remove_fim(lista);
	imprime(lista);

	lista = remove_inicio(lista);
	imprime(lista);

	lista = remove_valor(lista, 1);
	imprime(lista);

	lista = remove_valor(lista, 2);
	imprime(lista);

	liberar_recursivo(lista);
	lista = inicializa();

	if(vazia(lista)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}

	imprime(lista);

	return 0;
}
