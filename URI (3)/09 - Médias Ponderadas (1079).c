#include <stdio.h>

int main()
{
	int num, cont;
	
	cont=1;
	
	scanf("%d" ,&num);
	
	while (cont <= num)
	{
		float n1, n2 ,n3 ,media;
		
		scanf("%f %f %f" ,&n1 ,&n2 ,&n3);
		media = ((n1*2) + (n2*3) + (n3*5)) / 10; 
		printf("%.1f\n" ,media);
		
		cont++;
	}
	

	return 0;
}

