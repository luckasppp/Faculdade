#include <iostream>
#include <cstdlib>

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
	cout << "0-Sair do programa" << endl;
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
	
	int op(0);
	
	do{
		op = menu();
		switch(op) {
			case 1:
				
				break;
			case 2:
				
				break;
				
			case 3:
				
				break;
				
			case 4:
				
				break;
				
			case 5:
				
				break;
				
			case 6:
				
				break;
				
			defalt:
				cout << "Fim do programa" << endl;
		}
		
	} while((op >= 1) && (op <= 6));
	
	
	system("pause");
	return 0;
}
