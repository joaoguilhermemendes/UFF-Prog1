#include <stdio.h>

int main()
{
	int x, z ,cont ,total;
	
	scanf("%d" ,&x);
	
	
	do {
		scanf("%d" ,&z);
	} while (z <= x);
	
	cont = 0;
	
	do {
		total = total + (x+1);
		cont++;
	} while (total < z);

	printf("%d" ,cont);

	return 0;
}

