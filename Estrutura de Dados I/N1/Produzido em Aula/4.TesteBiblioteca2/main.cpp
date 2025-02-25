#include <cstdio>
#include <cstdlib>
#include <locale.h>
#include "media.h"


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	
	printf("Digite N1: ");
	scanf("%f", &n1);

	printf("Digite N2: ");
	scanf("%f", &n2);
	
	printf("A média de %.1f e %.1f é %.2f\n\n", n1, n2, media(n1, n2));

	system("pause");
	return 0;
}
