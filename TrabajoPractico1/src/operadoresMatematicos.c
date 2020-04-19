/*
 * operadoresMatematicos.c
 *
 *  Created on: 18 abr. 2020
 *      Author: Leonel
 */
#include <stdio.h>
#include <stdlib.h>

int calcularSuma(int a, int b){
	int resultado;
	resultado = a + b;

	return resultado;
}
int calcularResta(int a, int b){
	int resultado;
	resultado = (a) - (b);

	return resultado;
}
float calcularDivision(int a, int b){
	float resultado;
	resultado = (float) a  /  b;

	return resultado;
}
int calcularProducto(int a, int b){
	int resultado;
	resultado = a * b;

	return resultado;
}
int calcularFactorial(int a){
	int fact = 1;

	if(a != 0){
		for(int i = 1; i <=a; i++){
			fact = fact * i;
		}
	}else{
		fact = 0;
	}

	return fact;
}
