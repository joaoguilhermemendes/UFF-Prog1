#include <stdio.h>

int main()
{
	int num_quant, num, cont_par, cont_impar, cont_negativo, cont_positivo;

	cont_par=0;
	cont_impar=0;
	cont_positivo=0;
	cont_negativo=0;
	num_quant=0;
	
	do
	{
		
		scanf("%d" ,&num);
		//printf("num_quant = %d   |   num = %d\n" ,num_quant ,num);
		
		if (num%2==0)
			cont_par++;
			
		if (num % 2 != 0)
			cont_impar++;
			
		if (num < 0)
			cont_negativo++;
			
		if (num > 0)
			cont_positivo++;
			
		num_quant++;
		
		//printf("|cont_par = %d   \n|cont_impar = %d   \n|cont_negativo = %d   \n|cont_positivo = %d  \n" ,cont_par ,cont_impar , cont_negativo ,cont_positivo);
	
	}while (num_quant < 5);
	
	printf("%d valor(es) par(es)\n" ,cont_par);
	printf("%d valor(es) impar(es)\n" ,cont_impar);
	printf("%d valor(es) positivo(s)\n" ,cont_positivo);
	printf("%d valor(es) negativo(s)\n" ,cont_negativo);

	return 0;
}

