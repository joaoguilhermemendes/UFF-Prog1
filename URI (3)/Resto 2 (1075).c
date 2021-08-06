#include <stdio.h>

int main()
{
	int num, cont;
	
	scanf("%d" ,&num);
	
	while (cont < 100)
	{
		if (cont % num == 2)
		{
			printf("%d\n" ,cont);
		}
		
		cont++;	
	} 


	return 0;
}

