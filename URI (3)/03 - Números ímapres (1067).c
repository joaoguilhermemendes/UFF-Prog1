#include <stdio.h>

int main()
{
	int num, cont, cont_aux;
	
	scanf("%d" ,&num);
	
	cont=0;
	cont_aux=0;
	
	for (cont=1 ; cont<= num ; cont++)
	{
		if ( cont % 2 != 0)
			printf("%d\n" ,cont);
		cont_aux++;
	}


	return 0;
}

