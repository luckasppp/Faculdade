#include <iostream>
#include <locale.h>

//namespace std;

int menu(unsigned int num){
	std::cout << "Menu: " << std::endl;
	std::cout << "Informe N" << num << ": ";
	int tmp;
	std::cin >> tmp;
	std::cout << std::endl;
	return tmp;
}

void soma(int n1, int n2) {
	std::cout << "A soma e: " << n1+n2 << std::endl;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int n1 = menu(1);
	int n2 = menu(2);
	soma(n1, n2);
	
	system("pause");
	return 0;
}
