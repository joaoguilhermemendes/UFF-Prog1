#include <stdio.h>

int main()
{

	int num ,cont_aux ,cont ,fatorial;

	scanf("%d" ,&num);
	
	fatorial = num;
	cont = 1;
	
	while (cont < num)
	{
		fatorial = fatorial * (num - cont); 
		cont++;
	}
	
	printf("%d" ,fatorial);

	return 0;
}

