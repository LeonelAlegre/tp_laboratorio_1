/*
 * menu.h
 *
 *  Created on: 18 abr. 2020
 *      Author: Leonel
 */

#ifndef MENU_H_
#define MENU_H_

void mostrarMenu(int a, int b, int controladorA, int ControladorB);
/*\brief muestra un menu de opciones que se actualiza con los valores que se carguen
 *\param int a: valor del 1mer operador ingresado por el usuario
 *\param int b: valor del 2do operador ingresado por el usuario
 *\param int controladorA: comprueba que se haya ingresado un valor en el 1mer operador
 *\param int controladorB: comprueba que se haya ingresado un valor en el 2do operador
 *\return void
*/

int elegirOpcion();
/*\brief guarda la opcion introducida por el usuario
 *\return retorna la opcion elegida en forma de entero
*/

int ingresarOperador(int controlador);
/*\brief permite ingresar un numero a operar
 *\param int controlador: permite mostrar mensaje perzonalizado dependiendo su valor
 *\return devuelve el numero ingresado
*/

char calcularOperaciones();
/*\brief muestra un menu de operaciones y muestra la opcion elegida
 *\return retorna la opcion elegida
*/

void mostrarResultados(char operacion, int a, int b);
/*\brief muestra los resultados de los calculos seleccionados previamente
 *\param char operacion: opcion elegida a mostrar
 *\param int a: valor del 1mer operador
 *\param int b: valor del 2do operador
*/

char salir();
/*\brief pregunta al usuario si desea salir y de ser verdadero muestra un mensaje
 *\return opcion elegida por el usuario
*/

#endif /* MENU_H_ */
