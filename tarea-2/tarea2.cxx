// Tarea 2. 

#include <iostream>

using namespace std;

unsigned int total_perfectos(unsigned int x);
unsigned int suma_divisores(unsigned int x);

int main()
{
   cout << "El total de números perfectos hasta 1000 es " << total_perfectos(1000) << ".\n";
   return 0;
}

unsigned int total_perfectos(unsigned int x){
	unsigned int total;
	for(unsigned int i = 1; i <= x; i += 1){
		if (suma_divisores(i) == i){
			total += 1;
		}
	}
	return total;
}

unsigned int suma_divisores(unsigned int x)
{
	unsigned int suma = 0;
	for(unsigned int i = 1; i < x / 2 + 1; i += 1)
		if(x % i == 0)
			suma += i;
	return suma;
}
