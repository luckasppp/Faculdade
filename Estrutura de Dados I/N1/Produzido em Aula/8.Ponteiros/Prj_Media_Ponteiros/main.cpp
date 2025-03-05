#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*float*/ void media(float *n1, float *n2, float *media, float **pn1) {
	printf("Endereco PN1: %x \n", &n1);
	printf("Conteudo em referencia PN1: %x \n", n1);
	printf("Valor acessado PN1: %f \n", *n1);
	// *n1 = 10;
	
	printf("Endereco PN2: %x \n", &n2);
	printf("Conteudo em referencia PN2: %x \n", n2);
	printf("Valor acessado PN2: %f \n", *n2);
	// *media = (*n1 + *n2) / 2;
	
	printf("Acessando N1 por pn1: %f \n", **pn1);
	*media = (**pn1 + *n2) / 2;
	//return (*n1 + *n2_ / 2;
	
}


int main(int argc, char** argv) {
	float n1, n2, media(0);
	float *pn1 = &n1;
	
	printf("Digite N1: ");
	scanf("%f", &n1);
	
	printf("Digite N2: ");
	scanf("%f", &n2);
	
	printf("\n\n--------------RESULTADOS--------------\n");
	printf("Endereco de N1: %x \n", &n1);
	printf("Valor de N1: %x \n\n", n1);
	printf("Endereco de N2: %x \n", &n2);
	printf("Valor de N2: %x \n\n", n2);
	
	
	system("pause");
	return 0;
}
