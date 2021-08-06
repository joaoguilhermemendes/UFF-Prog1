#include <stdio.h>

int main()
{
	float num ,x ,y, cont, divisao;
	
	scanf("%f" ,&num);
	
	while (cont < num)
	{
		scanf("%f %f" ,&x ,&y);
		
		if (y == 0)
			printf("divisao impossivel\n");
			
		else if (y!= 0)
		{
			divisao = (x / y);
			printf("%.1f\n" ,divisao);	
		} 
		
		cont++;	
	}


	return 0;
}

