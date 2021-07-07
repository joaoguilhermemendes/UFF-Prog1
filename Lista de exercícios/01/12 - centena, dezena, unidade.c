#include <stdio.h>

int main()
{
	int num ,centena ,dezena ,unidade ,resto;
	
	scanf("%d" ,&num);
	
	centena = num/100;
	
	resto = num % 100;
	
	dezena = resto/10;
	
	unidade = resto % 10;
	
	printf("Centena: %d\n" ,centena);
	printf("Dezena: %d\n" ,dezena);
	printf("Unidade: %d\n" ,unidade);
	

	return 0;
}

