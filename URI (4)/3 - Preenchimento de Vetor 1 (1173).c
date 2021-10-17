#include <stdio.h>

int main()
{	
	int n1;
	
	int vetor[10];
	
	scanf("%d" ,&n1);
	
	int proximo = n1;
	
	for (int i=0; i<10; i++)
	{
		proximo = proximo * 2;
		vetor[0] = n1;
		vetor[i+1] = proximo; 
		printf("N[%d] = %d\n" ,i ,vetor[i]);
	}
	

	return 0;
}

