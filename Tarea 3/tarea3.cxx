//Tarea 3.

#include <iostream>

using namespace std;

int calcular_potencia(int a, int n);

int main()
{
	cout << "Dos al cubo es: " << calcular_potencia(2, 3) << endl;
	return 0;
}


int calcular_potencia(int a, int n)
{
	if(n==0)
		return 1;
	else
		return a*calcular_potencia(a, n-1);
}
