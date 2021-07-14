#include <stdio.h>

int main()
{
	float salario_antigo;
	
	scanf("%f" ,&salario_antigo);
	
	if (salario_antigo <= 400)
	{
		float salario_novo = (salario_antigo * 0.15) + salario_antigo;
		float reajuste = salario_antigo * 0.15;
		printf("Novo salario: %.2f\n" ,salario_novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 15 %%\n");
	}
	
	else if (salario_antigo >= 400.01 && salario_antigo <= 800)
	{
		float salario_novo = (salario_antigo * 0.12) + salario_antigo;
		float reajuste = salario_antigo * 0.12;
		printf("Novo salario: %.2f\n" ,salario_novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 12 %%\n");
	}
	
	else if (salario_antigo >= 800.01 && salario_antigo <= 1200)
	{
		float salario_novo = (salario_antigo * 0.10) + salario_antigo;
		float reajuste = salario_antigo * 0.10;
		printf("Novo salario: %.2f\n" ,salario_novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 10 %%\n");
	}
	
	else if (salario_antigo >= 1200.01 && salario_antigo <= 2000)
	{
		float salario_novo = (salario_antigo * 0.07) + salario_antigo;
		float reajuste = salario_antigo * 0.07;
		printf("Novo salario: %.2f\n" ,salario_novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 7 %%\n");
	}
	
	else if (salario_antigo > 2000)
	{
		float salario_novo = (salario_antigo * 0.04) + salario_antigo;
		float reajuste = salario_antigo * 0.04;
		printf("Novo salario: %.2f\n" ,salario_novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 4 %%\n");
	}


	return 0;
}

