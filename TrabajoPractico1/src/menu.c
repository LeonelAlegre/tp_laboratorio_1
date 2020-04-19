/*
 * menu.c
 *
 *  Created on: 18 abr. 2020
 *      Author: Leonel
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operadoresMatematicos.h"


void mostrarMenu(int a, int b, int controladorA, int controladorB){
	system("cls");
	printf("\n***** Calculadora *****\n\n");

	if(controladorA && controladorB){ //remplaza los valores de A y B en las cadenas de texto
		printf("1. Ingresar 1er operando: (A = %d)\n", a);
		printf("2. Ingresar 2do operando: (B = %d)\n", b);
		printf("3. Calcular todas las operaciones\n");
			printf("	a)Calcular la suma (%d + %d)\n", a, b);
			printf("	b)Calcular la resta (%d - %d)\n", a, b);
			printf("	c)Calcular la division (%d / %d)\n", a, b);
			printf("	d)Calcular la multiplicacion (%d * %d)\n", a, b);
			printf("	e)Calcular los factoriales (%d! y %d!)\n", a, b);
	}
	else if(controladorA){ //Remplaza los valores de A en las cadenas de texto
		printf("1. Ingresar 1er operando: (A = %d)\n", a);
		printf("2. Ingresar 2do operando: (B = y)\n");
		printf("3. Calcular todas las operaciones\n");
			printf("	a)Calcular la suma (%d + B)\n", a);
			printf("	b)Calcular la resta (%d - B)\n", a);
			printf("	c)Calcular la division (%d / B)\n", a);
			printf("	d)Calcular la multiplicacion (%d * B)\n", a);
			printf("	e)Calcular los factoriales (%d! y B!)\n", a);
	}
	else if(controladorB){ //Remplaza los valores de B en las cadenas de texto
		printf("1. Ingresar 1er operando: (A = x)\n");
		printf("2. Ingresar 2do operando: (B = %d)\n", b);
		printf("3. Calcular todas las operaciones\n");
			printf("	a)Calcular la suma (A + %d)\n", b);
			printf("	b)Calcular la resta (A - %d)\n", b);
			printf("	c)Calcular la division (A / %d)\n", b);
			printf("	d)Calcular la multiplicacion (A * %d)\n", b);
			printf("	e)Calcular los factoriales (A! y %d!)\n", b);
	}
	else{ //cadenas a mostrar por defecto
		printf("1. Ingresar 1er operando: (A = x)\n");
		printf("2. Ingresar 2do operando: (B = y)\n");
		printf("3. Calcular todas las operaciones\n");
			printf("	a)Calcular la suma (A + B)\n");
			printf("	b)Calcular la resta (A - B)\n");
			printf("	c)Calcular la division (A / B)\n");
			printf("	d)Calcular la multiplicacion (A * B)\n");
			printf("	e)Calcular los factoriales (A! y B!)\n");
	}
	printf("4. Informar resultados\n");
	printf("5. Salir\n");
}
int elegirOpcion(){//solicita una opcion del menu y la devuelve.
	int opcion;

	printf("Elegir una opccion: ");
	scanf("%d", &opcion);

	return opcion;
}
int ingresarOperador(int controlador){ //solicita el operador a manejar y lo devuelve
	int operador;

		//los controladores permiten mostrar un texto personalizado para cada opcion
		if(controlador == 1){
			printf("Ingresar operador A: ");
		}
		if(controlador == 2){
			printf("Ingresar operador B: ");
		}
		scanf("%d", &operador);

		//No logre realizar la validacion de numeros

	return operador;
}
char calcularOperaciones(){
	char operacion; //almacena la opcion elegida

	printf("Que operaciones desea realizar?: \n");
	printf("a)Calcular la suma (A + B)\n");
	printf("b)Calcular la resta (A - B)\n");
	printf("c)Calcular la division (A / B)\n");
	printf("d)Calcular la multiplicacion (A * B)\n");
	printf("e)Calcular los factoriales (A! y B!)\n");
	printf("f)Calcular todas las operaciones\n");
	fflush(stdin);
	scanf("%c", &operacion);

	switch(operacion){ //muestra un mensaje por cada opcion
	case 'a':
		printf("suma calculada\n");
		break;

	case 'b':
		printf("resta calculada\n");
		break;

	case 'c':
		printf("division calculada\n");
		break;

	case 'd':
		printf("multiplicacion calculada\n");
		break;

	case 'e':
		printf("factoriales calculados\n");
		break;

	case 'f':
		printf("se calcularon todas las operaciones\n");
		break;

	default:
		printf("Ha ingresado una opcion erronea\n");
		break;
	}

	return operacion;
}
void mostrarResultados(char operacion, int a, int b){

	switch(operacion){ //muestra los resultados de las operaciones dependiendo cual se haya seleccionado
	case 'a':
		printf("a) El resultado de %d + %d es: %d\n", a, b, calcularSuma(a, b));
		break;

	case 'b':
		printf("b) El resultado de %d - %d es: %d\n", a, b, calcularResta(a, b));
		break;

	case 'c':
		printf("c) El resultado de %d / %d es: %.2f\n", a, b, calcularDivision(a, b));
		break;

	case 'd':
		printf("d) El resultado de %d * %d es: %d\n", a, b, calcularProducto(a, b));
		break;

	case 'e':
		printf("e) El factorial de %d es: %d y El factorial de %d es: %d\n", a, calcularFactorial(a), b, calcularFactorial(b));
		break;
	case 'f':
		printf("a) El resultado de %d + %d es: %d\n", a, b, calcularSuma(a, b));
		printf("b) El resultado de %d - %d es: %d\n", a, b, calcularResta(a, b));
		printf("c) El resultado de %d / %d es: %.2f\n", a, b, calcularDivision(a, b));
		printf("d) El resultado de %d * %d es: %d\n", a, b, calcularProducto(a, b));
		printf("e) El factorial de %d es: %d y El factorial de %d es: %d\n", a, calcularFactorial(a), b, calcularFactorial(b));

		break;
	default:
		printf("error\n");
		break;
	}

}
char salir(){ //se pregunta si desea salir. En caso de ser verdadero muestra un mensaje
	char respuesta;

	printf("Esta seguro de querer salir?: s / n \n");
	fflush(stdin);
	scanf("%c", &respuesta);
	if(respuesta == 's'){
		printf("Adios!\n");
	}

	return respuesta;
}
