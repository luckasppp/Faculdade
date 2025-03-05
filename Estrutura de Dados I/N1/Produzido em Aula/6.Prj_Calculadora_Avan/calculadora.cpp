// calculadora.cpp
#include <cmath>

float soma(float n1, float n2){
	return n1 + n2;
}

float subtracao(float n1, float n2){
	return n1 - n2;
}

float multiplicacao(float n1, float n2){
	return n1 * n2;
}

float divisao(float n1, float n2){
	return n1 / n2;
}

float potencia(float base, float potencia){
	return pow(base, potencia);
}

float raiz(float n1, float n2){
	return pow(n1, 1.0f / n2);
}
