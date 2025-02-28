#include <iostream>
#include <cstdlib>
#include <cstdio>

float media(float n1, float n2) {
	return (n1 + n2) / 2;
}

int main() {
	float n1, n2, resultado;
	printf("Digite N1: ");
	scanf("%f", &n1);
	
	printf("Digite N2: ");
	scanf("%f", &n2);
	
	resultado = media(n1, n2);
	
	printf("Media: %.1f\n\n", resultado);
	
	system("pause");
	return 0;
}


