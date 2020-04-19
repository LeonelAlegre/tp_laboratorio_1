/*
 ============================================================================
 Name        : TrabajoPractico1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operadoresMatematicos.h"
#include "menu.h"

int main(void) {
	int operadorA; //guarda el valor del operador A ingresado
	int controladorOperadorA = 0; //comprueba que se haya ingresado el operador A
	int operadorB; //guarda el valor del operador B ingresado
	int controladorOperadorB = 0; //comprueba que se haya ingresado el operador B
	char cerrar = 'n'; //validacion para salir del switch y cerrar el programa
	int controladorOpcion = 0; //guarda la opccion seleccionada para escribir la opccion adecuada segun el caso
	char controladorOperacion; //almacena la opcion elegida de la funcion calcularOperaciones();
	int flagOperaciones = 0; //comprueba que se haya seleccionado una operacion para realizar

	do{
		mostrarMenu(operadorA, operadorB, controladorOperadorA, controladorOperadorB);

		switch(elegirOpcion()){
		case 1:
			controladorOperadorA = 1;
			controladorOpcion = 1;
			operadorA = ingresarOperador(controladorOpcion);
			break;
		case 2:
			controladorOperadorB = 1;
			controladorOpcion = 2;
			operadorB = ingresarOperador(controladorOpcion);
			break;
		case 3:
			if(controladorOperadorA && controladorOperadorB){ //si se ingresaron operadores se podran seleccionar operaciones
				controladorOperacion = calcularOperaciones();
				flagOperaciones = 1;
			}
			else if(controladorOperadorA){ //mensajes de error en caso que falten ingresar los operadores
				printf("Falta ingresar el 2do operador\n");
			}else if(controladorOperadorB){
				printf("Falta ingresar el 1er operador\n");
			}else{
				printf("Falta ingresar ambos operadores\n");
			}
			break;
		case 4:
			if(flagOperaciones){ //si se selecciono una operacion muestra los resultados
				mostrarResultados(controladorOperacion, operadorA, operadorB);
				flagOperaciones = 0; //se reinicia la bandera
			}else{
				printf("Error. Falta calcular operaciones\n");
			}

			break;
		case 5:

			cerrar = salir();
			break;
		default:
			printf("A seleccionado una opcion no valida\n");
			fflush(stdin);
		}
		system("pause");
	}while(cerrar == 'n');

	return 0;
}

