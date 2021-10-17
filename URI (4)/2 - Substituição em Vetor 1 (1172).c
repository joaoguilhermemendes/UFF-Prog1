#include <stdio.h>

int main()
{
	int vetor[10];
	
	for (int i=0; i<10; i++)
	{
		scanf("%d" ,&vetor[i]);
	}
	
	for (int b=0; b<10; b++)
	{
		if (vetor[b] <= 0)
			printf("X[%d] = 1\n" ,b); 
			
		else
			printf("X[%d] = %d\n" ,b ,vetor[b]);
	}

	return 0;
}

