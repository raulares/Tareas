/*
 * Tarea 3. Raúl Valentín Cortez Ares CA16007. Realizar un programa que utilizando
 * funciones recursivas calcule 2 al cubo creando para ello una funcion
 * que se llame calcular_potencia con dos argumentos. Esta función debe ser recursiva.
 */

#include <iostream>

using namespace std;

int calcular_potencia(int a, unsigned int n);

int main(){
	cout << "Dos al cubo es igual a " << calcular_potencia(2, 3) << ".\n";
	return 0;
}

/*
 * calcular_potencia tiene un argumento entero, y uno entero sin signo;
 * y devuelve a elevado a la n recursivamente, quitando cada una de las potencias,
 * hasta llegar a la potencia 0.
 */
int calcular_potencia(int a, unsigned int n){
	if(n==0){
		return 1;
	}
	else{
		return a*calcular_potencia(a, n-1);
	}
}
