#include "lista_circular.h"

using namespace std;

int main(int argc, char** argv) {
	
	No* lista = inicializa();
	
	lista = insere_inicio(lista, 11);
	imprime(lista);
	
	lista = insere_inicio(lista, 6);
	imprime(lista);
	
	lista = insere_inicio(lista, 8);
	imprime(lista);
	
	lista = insere_fim(lista, 19);
	imprime(lista);
	
	imprime_inicio(lista);
	
	if(vazia(lista)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	
	cout << "Quantidade: " << quantidade(lista) << endl;
	
	busca(lista, 7);
	
	busca(lista, 6);
	
	lista = retira(lista, 11);
	imprime(lista);
	
	lista = insere_fim(lista, 22);
	imprime(lista);
	
	lista = insere_inicio(lista, 10);
	imprime(lista);
	
	lista = retira_fim(lista);
	imprime(lista);
	
	lista = retira_inicio(lista);
	imprime(lista);
	
	imprime_fim(lista);
	
	lista = inicio_liberar_recursivo(lista);
	imprime(lista);
	
	return 0;
}
