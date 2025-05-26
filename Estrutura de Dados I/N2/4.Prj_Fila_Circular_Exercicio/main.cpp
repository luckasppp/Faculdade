#include "fila.h"

using namespace std;

int main(int argc, char** argv) {
	
	No* fila = inicializaFila();
	
	fila = enqueue(fila, 5);
	imprimir(fila);
	
	fila = enqueue(fila, 3);
	imprimir(fila);
	
	fila = dequeue(fila);
	imprimir(fila);
	
	fila = enqueue(fila, 7);
	imprimir(fila);
	
	fila = dequeue(fila);
	imprimir(fila);
	
	front(fila);
	
	fila = dequeue(fila);
	imprimir(fila);
	
	fila = dequeue(fila);
	imprimir(fila);
	
	if(isEmpty(fila)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	
	fila = enqueue(fila, 9);
	imprimir(fila);
	
	fila = enqueue(fila, 7);
	imprimir(fila);
	
	cout << "Tamaho: " << size(fila) << endl;
	
	fila = enqueue(fila, 3);
	imprimir(fila);
	
	fila = enqueue(fila, 5);
	imprimir(fila);
	
	front(fila);
	last(fila);
	
	fila = dequeue(fila);
	imprimir(fila);
	
	cout << "Tamaho: " << size(fila) << endl;
	
	fila = liberar_recursivo_fila(fila);
	imprimir(fila);
	
	if(isEmpty(fila)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	
	return 0;
}
