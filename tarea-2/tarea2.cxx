/* Tarea 2. Raúl Valentín Cortez Ares CA16007. Realizar un programa que utilizando funciones
 * definidas por el usuario calcule la cantidad de números perfectos en el siguiente rango
 * de valores de 0 a 1000.
 */

#include <iostream>

using namespace std;

unsigned int total_perfectos(unsigned int x);
unsigned int suma_divisores(unsigned int x);

int main(){
   cout << "El total de números perfectos hasta 1000 es " << total_perfectos(1000) << ".\n";
   return 0;
}

/*
 * Esta función calcula la cantidad de números perfectos que hay hasta el número entero x.
 * Para esto, revisa cuando los números menores que x son iguales a la suma de sus
 * divisores propios, y luego devuelve la cantidad de enteros que cumplen esto.
 */
unsigned int total_perfectos(unsigned int x){
	unsigned int total;
	for(unsigned int i = 1; i <= x; i += 1){
		if (suma_divisores(i) == i){
			total += 1;
		}
	}
	return total;
}

/*
 * Esta función calcula la suma de los divisores propios de un número entero x.
 * Para realizarlo se calcula el residuo al dividir entre todos los números menores que x,
 * y devuelve la suma de todos los que dejan residuo cero, es decir, sus divisores propios.
 */
unsigned int suma_divisores(unsigned int x){
	unsigned int suma = 0;
	for(unsigned int i = 1; i < x / 2 + 1; i += 1){
		if(x % i == 0){
			suma += i;
		}
	}
	return suma;
}
