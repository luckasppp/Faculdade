#include <cstdlib>
#include <iostream>
#include "vetor.h"

using namespace std;

int main() {
    Vetor vetor;
    inicializar(&vetor);
    int opcao, valor;

    do {
        cout << "\nMenu:" << endl;
        cout << "1 - Inserir no fim" << endl;
        cout << "2 - Inserir no inicio" << endl;
        cout << "3 - Buscar sequencial" << endl;
        cout << "4 - Buscar binaria" << endl;
        cout << "5 - Ordenar vetor" << endl;
        cout << "6 - Imprimir vetor (recursivo)" << endl;
        cout << "0 - Sair" << endl;
		
		cout << "Escolha uma opcao: ";
    	cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a inserir: ";
                cin >> valor;
                insere_fim(&vetor, valor);
                break;
            case 2:
                cout << "Digite o valor a inserir: ";
                cin >> valor;
                insere_inicio(&vetor, valor);
                break;
            case 3:
			    cout << "Digite o valor a buscar: ";
			    cin >> valor;
			    cout << (busca_sequencial(&vetor, valor) ? "Encontrado!\n" : "Nao encontrado.\n");
			    break;
			
			case 4:
			    cout << "Digite o valor a buscar: ";
			    cin >> valor;
			    cout << (busca_binaria(&vetor, valor) ? "Encontrado!" : "Nao encontrado.") << endl;
			    break;
            case 5:
                ordena_bubblesort(&vetor);
                cout << "Vetor ordenado." << endl;
                break;
            case 6:
                imprimir_rec(&vetor, 0);
                break;
        }
    } while (opcao != 0);

    liberar(&vetor);
    return 0;
}

