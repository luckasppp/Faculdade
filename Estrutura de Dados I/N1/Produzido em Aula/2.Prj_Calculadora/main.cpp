#include <iostream> // Bibliotecas C++ n�o usam a extens�o .h
#include <locale.h>
#include "calculadora.h" // Adicionando a biblioteca criada

using namespace std;

int menu() {
	int op;
	cout << "Menu: " << endl;
	cout << "1 - Soma" << endl;
	cout << "2 - Subtra��o" << endl;
	cout << "3 - Multiplica��o" << endl;
	cout << "4 - Divis�o" << endl;
	cout << "0 - Sair do menu" << endl;
	cout << "Op��o?: ";
	
	cin >> op;
	return op;
}

float obterValor(int n) {
	float num;
	cout << "Insira o N" << n << ": ";
	cin >> num;
	return num;
}

int main (int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	 int op;
	 float n1, n2, resposta;
	// Loop de menu com o usu�rio
	do {
		op = menu();
		switch(op) {
			case 1: // Soma
				n1 = obterValor(1);
				n2 = obterValor(2);
				resposta = soma(n1, n2);
				cout << "Soma: " << resposta << endl;
				break;
			
			case 2: // Subtra��o
				n1 = obterValor(1);
				n2 = obterValor(2);
				resposta = subtracao(n1, n2);
				cout << "Subtra��o: " << resposta << endl;
				break;
				
			case 3: // Multiplica��o
				n1 = obterValor(1);
				n2 = obterValor(2);
				resposta = multiplicacao(n1, n2);
				cout << "Multiplica��o: " << resposta << endl;
				break;
			
			case 4: // Divis�o
				n1 = obterValor(1);
				n2 = obterValor(2);
				resposta = divisao(n1, n2);
				cout << "Divis�o: " << resposta << endl;
				break;
				
			default:
				cout << "Fim de programa." << endl;
		}
	} while((op >= 1) && (op <= 4));

	system("pause");
	return 0;
}

