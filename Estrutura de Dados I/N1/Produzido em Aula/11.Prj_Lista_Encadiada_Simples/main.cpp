#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	No* no = inicializa();
	imprime_lista(no);
	no = insere_inicio(no, 23);
	imprime_lista(no);
	no = insere_inicio(no, 22);
	imprime_lista(no);
	no = insere_inicio(no, 21);
	imprime_lista(no);
	//vazia_msg(no);
	no = libera(no);
	imprime_inicio(no);
	imprime_fim(no);
	no = insere_inicio(no, 23);
	imprime_lista(no);
	no = insere_inicio(no, 22);
	imprime_lista(no);
	no = insere_inicio(no, 21);
	//busca_msg(no, 22);
	//busca_msg(no, 100);
	no = retira(no, 20);
	no = retira(no, 21);
	no = retira(no, 23);
	imprime_lista(no);
	no = libera(no);
	system("pause");
	return 0;
}
