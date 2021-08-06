#include <stdio.h>
#include <math.h>

int main ()
{
	int n, a, primo, c, d;
	scanf("%d", &n);
	
	for(a=0 ; a<n ; a++)
	{
		c=1;
		scanf("%d", &primo);
		for(d=2; d<= (int) sqrt(primo);d++)
		{
			if(primo%d==0)
			c++;
		}
		if(c==1&&primo!=1)
		{
			printf("%d eh primo\n", primo);
		}
		else
		{
			printf("%d nao eh primo\n", primo);
		}
	}
	
	return 0;
}

