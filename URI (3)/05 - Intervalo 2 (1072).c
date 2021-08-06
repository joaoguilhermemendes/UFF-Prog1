#include <stdio.h>

int main()
{
	int num, quant;
	
	int cont = 0;
	int cont_in = 0;
	int cont_out = 0;
	
	scanf("%d" ,&quant);
	
	while (cont < quant)
	{
		scanf("%d" ,&num);
		
		if (num <= 20 && num >= 10)
			cont_in++;
			
		else if (num > 20 || num < 10)
			cont_out++;
		
		cont++;
	}
	
	printf("%d in\n" ,cont_in);
	printf("%d out\n" ,cont_out);

	return 0;
}

