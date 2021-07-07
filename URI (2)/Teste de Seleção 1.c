#include <stdio.h>

int main()
{
	float a, b, c, d ,resto;
	
	scanf("%d %d %d %d" ,&a ,&b ,&c ,&d);
	
	if (b > c && d > a && c > 0 && d > 0 && (c+d) > (a+b))
	{		
		printf("Valores aceitos");
	}
	
	else 
	{
		printf("valores nao aceitos\n");
	}
	

	return 0;
}

