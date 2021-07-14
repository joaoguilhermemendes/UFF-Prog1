#include <stdio.h>

int main()
{
	float salario;
	
	scanf("%f" ,&salario);
	
	if (salario < 2000.01)
		printf("Isento\n");
	
	else if (salario <= 3000.0)
	{
		float imposto = (salario - 2000.0) * 0.08;
		printf("R$ %.2f\n" ,imposto);
	}
		
	else if (salario <= 4500.00)
	{
		float imposto = (1000.0 * 0.08 + (salario - 3000.0) * 0.18);
		printf("R$ %.2f\n" ,imposto);
	}	
	
	else if (salario > 4500.00)
	{
		float imposto = (1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
		printf("R$ %.2f\n" ,imposto);
	}

	return 0;
}

