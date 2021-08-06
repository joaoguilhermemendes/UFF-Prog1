#include <stdio.h>

int main()
{
	int num1, num2 ,maior, menor, cont ,total;
	
	scanf("%d" ,&num1);
	scanf("%d" ,&num2);
	
	if (num1 > num2)
	{
		maior = num1;
		menor= num2;
	}
	
	else if (num2 > num1)
	{
		maior = num2;
		menor= num1;
	}
	
	cont = menor + 1;

	while (cont > menor && cont < maior)
	{
		
		if (cont % 2 != 0)
		{
			total = cont + total;
		}
		cont++;
	}
	
	printf("%d\n" ,total);

	return 0;
}

