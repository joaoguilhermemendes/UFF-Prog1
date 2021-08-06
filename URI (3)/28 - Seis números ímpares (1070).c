#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d",&num);
	
	int cont = 0; 
	
	while (cont < 6)
	{
		if (num % 2 != 0)
		{
			printf("%d\n" ,num);
			cont++;
		}
		
		num++;	
	}


	return 0;
}

