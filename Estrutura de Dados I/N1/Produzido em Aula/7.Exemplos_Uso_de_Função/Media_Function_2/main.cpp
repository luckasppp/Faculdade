#include <iostream>
#include <cstdio>
#include <cstdio>

float media(float n1, float n2) {
	return (n1 + n2) / 2;
}

int main(int argc, char** argv) {
	
	float n1, n2, resultado;
	
	printf("Programa: %s \n", argv[0]);
	n1 = argv[1];
	n2 = argv[2];
	resultado = media(n1, n2);
	
	printf("Media: %.1f \n\n", media);
	
	system("pause");
	return 0;
}
