#include <stdio.h>

int main()
{
	int num ,cont ,maior ,cont_maior;
	
	maior = 0;
	cont = 1;
	
	while (cont <= 6)
	{
		scanf("%d" ,&num);
		
		if (maior < num)
		{
			maior = num;
			cont_maior = cont;
		}
		
		cont++;
	}
	
	printf("%d\n" ,maior);
	printf("%d\n" ,cont_maior);


	return 0;
}

