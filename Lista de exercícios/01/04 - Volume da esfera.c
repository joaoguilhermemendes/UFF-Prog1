#include <stdio.h>
#include <math.h>

int main()
{
	
	float raio ,volume;
	float pi = 3.1415926534;
	
	printf("Informe o raio da esfera: ");
	scanf("%f" ,&raio);
	
	// Ve = 4. p. r³/3
	volume = 4 * pi * pow(raio ,3)/3;
	
	printf("O volume quando o raio eh [%.2f] eh de [%.2f]" ,raio ,volume);
	
	return 0;
}

