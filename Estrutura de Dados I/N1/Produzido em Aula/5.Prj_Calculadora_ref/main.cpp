#include <iostream>
#include <cstdlib>
#include "calculadora.h"

using namespace std;

int menu() {
	cout << "Calculadora:" << endl;
	cout << "1-Soma" << endl;
	cout << "2-Subtracao" << endl;
	cout << "3-Multiplicacao" << endl;
	cout << "4-Divisao" << endl;
	cout << "5-Especial" << endl;
	cout << "0-Sair" << endl;
	cout << "? ";
	int op;
	cin >> op;
	return op;
}

float obter_num(int i) {
	float num;
	cout << "Digite o N" << i << ": ";
	cin >> num;
	return num;
}

int main() {
	
	int op(0);
	float n1, n2;
	
	do{
		op = menu();
		switch(op) {
			case 1:
				// Soma
				n1 = obter_num(1);
				n2 = obter_num(2);
				cout << "A soma eh: " << soma(n1, n2) << endl;
				break;
				
			case 2:
				// Subtracao
				cout << "A subtracao eh: " << subtracao(obter_num(1), obter_num(2)) << endl;
				break;
				
			case 3:
				// Multiplicacao
				cout << "A multiplicacao eh: " << multiplicacao(obter_num(1), obter_num(2)) << endl;
				break;
				
			case 4:
				// Diviasao
				cout << "A divisao eh: " << divisao(obter_num(1), obter_num(2)) << endl;
				break;
				
			case 5:
				// Especial
				especial();
				break;
			default:
				// Fim do programa 
				cout << "Fim do programa!" << endl << endl;
		}
	} while ((op > 0) && (op < 6));
	
	system("pause");
	return 0;
}
