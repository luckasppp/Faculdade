#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv) {
	
	float somatorio(0), media;
	
	for(int i = 1; i < argc; i++) {
		somatorio += atof(argv[i]); // Converde para float
	}
	
	media = somatorio/(argc - 1);
	printf("Media: %.1f \n", media);
	printf("Fim do programa %s \n", argv[0]);
	
	system("pause");
	return 0;
}
