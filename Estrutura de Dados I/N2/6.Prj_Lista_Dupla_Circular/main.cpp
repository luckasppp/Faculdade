#include "lista_dup_circ.h"

using namespace std;

int main() {
    No* lista = NULL;
    int opcao, valor;
    bool listaCriada = false;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Criar nova lista\n";
        cout << "2. Inserir no inicio\n";
        cout << "3. Inserir no fim\n";
        cout << "4. Remover do inicio\n";
        cout << "5. Remover do fim\n";
        cout << "6. Remover por valor\n";
        cout << "7. Buscar valor\n";
        cout << "8. Quantidade de elementos\n";
        cout << "9. Imprimir\n";
        cout << "10. Imprimir reverso\n";
        cout << "11. Imprimir inicio\n";
        cout << "12. Imprimir fim\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (!listaCriada && opcao != 1 && opcao != 0) {
            cout << "Crie a lista primeiro (opcao 1)!" << endl;
            continue;
        }

        switch(opcao) {
            case 1:
                lista = inicializa();
                listaCriada = true;
                cout << "Lista criada com sucesso!" << endl;
                break;
            case 2:
                cout << "Valor a inserir no inicio: ";
                cin >> valor;
                lista = insere_inicio(lista, valor);
                break;
            case 3:
                cout << "Valor a inserir no fim: ";
                cin >> valor;
                lista = insere_fim(lista, valor);
                break;
            case 4:
                lista = remove_inicio(lista);
                break;
            case 5:
                lista = remove_fim(lista);
                break;
            case 6:
                cout << "Valor a remover: ";
                cin >> valor;
                lista = remove_valor(lista, valor);
                break;
            case 7:
                cout << "Valor a buscar: ";
                cin >> valor;
                if (busca(lista, valor))
                    cout << "Valor encontrado!" << endl;
                else
                    cout << "Valor nao encontrado." << endl;
                break;
            case 8:
                cout << "Quantidade de elementos: " << quantidade(lista) << endl;
                break;
            case 9:
                imprime(lista);
                break;
            case 10:
                imprime_reverso(lista);
                break;
            case 11:
                imprime_inicio(lista);
                break;
            case 12:
                imprime_fim(lista);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}

