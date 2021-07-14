#include <stdio.h>

int main()
{
	int num1, num2;
	
	scanf("%d %d" ,&num1 ,&num2);
	
	if (num1>num2)
	{
		float resto = num1 % num2;
		if (resto == 0)
			printf("Sao Multiplos\n");
		else 
			printf("Nao sao Multiplos\n");
	}
	
	else
	{
		float resto = num2 % num1;
		if (resto == 0)
			printf("Sao Multiplos\n");
		else 
			printf("Nao sao Multiplos\n");
	}
	
	return 0;
}

