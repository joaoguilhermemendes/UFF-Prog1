#include <stdio.h>

int main ()
{
	int num1, num2, soma, x;
	scanf("%d %d", &num1, &num2);
	soma = 0;
	
	if (num1 < num2)
	{
		for(x=num1;x<=num2;x++)
		{
			if(x%13!=0)
			{
				soma+=x;
			}
		}
	}
	else
	{
		for(x=num2;x<=num1;x++)
		{
			if(x%13!=0)
			{
				soma+=x;
			}
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}

