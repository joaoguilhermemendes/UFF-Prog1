#include <stdio.h>

int main()
{

	int num_base ,base;
	
	scanf("%d" ,&num_base);
	
	base = 0;
	
	while (base < 10)
	{
		base++;
		printf("%d x %d = %d\n" ,base , num_base , base*num_base);
	}

	return 0;
}

