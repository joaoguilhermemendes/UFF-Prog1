#include <stdio.h>
#include <math.h>

int main()
{
	int num, cont ,quadrado ,cubo;
	
	scanf("%d" ,&num);
	
	cont = 1;
	
	while (cont <= num)
	{
		quadrado = pow(cont, 2);
		cubo = pow(cont ,3);
		
		printf("%d " ,cont);
		printf("%d " ,quadrado);
		printf("%d\n" ,cubo);
		
		cont++;
	}


	return 0;
}

