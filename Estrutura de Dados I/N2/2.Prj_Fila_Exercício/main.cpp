#include <iostream>
#include "fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	No* fila = inicializaFila();
	fila = enqueue(fila, 5);
	fila = enqueue(fila, 3);
	fila = dequeue(fila);
	fila = enqueue(fila, 7);
	fila = dequeue(fila);
	front(fila);
	fila = dequeue(fila);
	fila = dequeue(fila);
	if(isEmpty(fila)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	fila = enqueue(fila, 9);
	fila = enqueue(fila, 7);
	cout << "Tamaho: " << size(fila) << endl;
	fila = enqueue(fila, 3);
	fila = enqueue(fila, 5);
	fila = dequeue(fila);
	mostrar(fila);
	cout << "Tamaho: " << size(fila) << endl;
	
	return 0;
}