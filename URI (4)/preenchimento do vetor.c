#include <stdio.h>

int main ()
{
	int n[10];
	int x, y;
	
	scanf("%d", &y);
	
	for(x = 0; x<10; x++)
	{
		n[10] = y;
		y*=2;
		printf("N[%d] = %d\n",x,y);
	}
	
	return 0;
}
