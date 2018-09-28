// Tarea 2. 

#include <iostream>

using namespace std;

unsigned int TotalPerfectos(int x);
unsigned int EsPerfecto(int x);
unsigned int SumaDivisores(int x);
unsigned int EsDivisor(int x, int i);

int main()
{
   unsigned int y = 429496;
   unsigned int t;
   t = TotalPerfectos(y);
   cout << "El total de números perfectos hasta " << y << " es " << t << endl;
   return 0;
}

unsigned int TotalPerfectos(int x)
{
	unsigned int a = 0;
	unsigned int b = 1;
	for(int i=1; i <= 429496; i+=1)
	{
		a = a + EsPerfecto(i);
		b+=1;
		if(b%10000 == 0)
			cout << "Vamos por el " << b << endl;
	}
	return a;
}


unsigned int EsPerfecto(int x)
{
	if(SumaDivisores(x) == x)
		return 1;
	else
		return 0;
}

unsigned int SumaDivisores(int x)
{
	unsigned int a = 0;
	for(int i = 1; i < x/2+1; i+=1)
		if(EsDivisor(x, i) == 1)
			a = a + i;
	return a;
}

unsigned int EsDivisor(int x, int i)
{
	if(x%i==0)
		return 1;
	else
		return 0;
}




