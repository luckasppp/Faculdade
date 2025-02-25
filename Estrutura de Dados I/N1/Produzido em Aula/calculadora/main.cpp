#include <iostream> // bibioteca padrao de C++ para entrada e saída de dados
#include "calculadora.h" // biblioteca propria
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int menu(){
	cout << "Calculadora: " << endl;
	cout << "1 - Soma" << endl;
	cout << "2 - Subtracao" << endl;
	cout << "3 - Multiplicacao" << endl;
	cout << "4 - Divisao" << endl;
	int op = 0;
	cin >> op;
	
	return op;
}

float obter_num(int n){
	cout << "Digine n" << n << ": ";
	float r;
	cin >> r;
	return r;
}

int main() {
	int op(0);
	float resp, n1, n2;
	do{
		op = menu();
		switch(op){
			case 1:
				// Soma
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = soma(n1, n2);
				cout << "Soma eh:" << resp << endl;
				break;
			case 2:
				// Subtracao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = subtracao(n1, n2);
				cout << "Subtracao eh: " << resp << endl;
				break;
		}
	} while((op<=4) && (op>=1));
	
	system("pause");
	return 0;
}
