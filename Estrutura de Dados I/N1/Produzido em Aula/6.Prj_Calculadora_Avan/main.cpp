#include <iostream>
#include <cstdlib>
#include <iomanip> // Necessário para setprecision

#include "calculadora.h"
#include "testeNum.h"

using namespace std;

int menu(){
	int op;
	
	cout << "Calculadora:" << endl;
	cout << "1-Soma" << endl;
	cout << "2-Subtracao" << endl;
	cout << "3-Multiplicacao" << endl;
	cout << "4-Divisao" << endl;
	cout << "5-Potencia" << endl;
	cout << "6-Raiz" << endl;
	cout << "7-Teste numero" << endl;
	cout << "0-Sair do programa" << endl;
	cout << "? ";
	
	cin >> op;
	
	return op;
}

int subMenu() {
	char op;
	
	cout << "a-Eh par?" << endl;
	cout << "b-Eh impar?" << endl;
	cout << "c-Eh primo?" << endl;
	cout << "d-Voltar ao menu principal" << endl;
	cout << "? ";
	
	cin >> op;
	
	return op;
}


	
float obterNum(int i) {
	float num;
	
	cout << "Digite o N" << i << ": ";
	
	cin >> num;
	
	return num;
}

int main(int argc, char** argv) {
	
	float n1, n2;
	int op(0);
	char opcao;
	
	cout << fixed << setprecision(2);
	
	do{
		op = menu();
		switch(op) {
			case 1:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A soma eh: " << soma(n1, n2) << endl;
				break;
			case 2:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A subtracao eh: " << subtracao(n1, n2) << endl;
				break;
				
			case 3:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A multiplicacao eh: " << multiplicacao(n1, n2) << endl;
				break;
				
			case 4:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A divisao eh: " << divisao(n1, n2) << endl;
				break;
				
			case 5:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A potencicao eh: " << potencia(n1, n2) << endl;
				break;
				
			case 6:
				n1 = obterNum(1);
				n2 = obterNum(2);
				cout << "A raiz eh: " << raiz(n1, n2) << endl;
				break;
				
			case 7:
				do {
					opcao = subMenu();
				
					switch(opcao) {
						case 'a':
							if (ehPar(obterNum(1))){
								cout << "O numero eh par!" << endl;
							} else {
								cout << "O numero eh impar!" << endl;
							}
							break;
							
						case 'b':
							if (ehImpar(obterNum(1))){
								cout << "O numero eh impar!" << endl;
							} else {
								cout << "O numero eh par!" << endl;
							}
							break;
							
						case 'c':
							if (ehPrimo(obterNum(1))){
								cout << "O numero eh primo!" << endl;
							} else {
								cout << "O numero nao eh primo!" << endl;
							}
							break;		
					}	
				} while(opcao == 'a' || opcao == 'b' || opcao == 'c');
				
				break;
				
			default:
				cout << "Fim do programa" << endl;
		}
		
	} while((op >= 1) && (op <= 7));
	
	
	system("pause");
	return 0;
}
