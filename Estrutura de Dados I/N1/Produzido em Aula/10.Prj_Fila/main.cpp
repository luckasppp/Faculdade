#include "Fila.h"

void menu(){
	cout << "Selecione uma opcao para realizar na fila" << endl;
	cout << "1 - Enqueue" << endl;
	cout << "2 - Dequeue" << endl;
	cout << "3 - Imprime" << endl;
	cout << "4 - Frente" << endl;
	cout << "5 - Eh vazio?" << endl;
	cout << "6 - Tamanho" << endl;
	cout << "0 - Sair do programa!" << endl;
}

int main(int argc, char** argv) {
	int opcao = 0, valor = 0;
	Fila* fila = (Fila*) malloc(sizeof(Fila));
	inicializa(fila);
	
	do{
		menu();
		cout << "Escolha: ";
		cin >> opcao;
		
		switch(opcao) {
			case 1:
				cout << "Enfileirar valor: ";
				cin >> valor;
				enqueue(fila, valor);
				break;
	
			case 2:
				dequeue(fila);
				break;
			
			case 3: 
				imprimir(fila);
				break;
			
			case 4:
				front(fila);
				break;
				
			case 5:
				if(isEmpty(fila)) {
					cout << "A fila esta vazia!" << endl;
				} else {
					cout << "A fila nao esta vazia!" << endl;
				}
				break;
			
			case 6:
				cout <<  "A fila tem " << size(fila) << " posicoes!" << endl;
			
		}
		
	} while (opcao > 0 && opcao < 7);
	
	system("pause");
	
	return 0;
}
