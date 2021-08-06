#include <stdio.h>
#include <math.h>>

int main()
{
	int num ,cont, quadrado;
	
	scanf("%d" ,&num);
	
	cont = 1;
	
	while (cont <= num)
	{
		if (cont % 2 == 0)
		{
			quadrado = pow(cont ,2);
			printf("%d^2 = %d\n" ,cont ,quadrado);
		}
		
		cont++;
	}


	return 0;
}

