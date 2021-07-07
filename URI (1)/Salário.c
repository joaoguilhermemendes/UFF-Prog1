#include <stdio.h>

int main() 
{
	int numero, horas ;
	float salarioporhora ,salario;
	
	scanf("%d" ,&numero);
	scanf("%d" ,&horas);
	scanf("%f" ,&salarioporhora);
	
	salario = (horas * salarioporhora);
	
	printf("NUMBER = %d\n" ,numero);
	printf("SALARY = U$ %.2f" ,salario);

	
	return 0;
}
