#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	locale::global(locale("pt_BR.utf8"));
	cout.imbue(locale());
	
	return 0;
}
