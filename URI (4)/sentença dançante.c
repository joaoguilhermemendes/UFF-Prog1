#include <stdio.h>

int main ()
{
	int j, danca;
	char letra[50];
	
	while(NULL != gets(letra))
	{
		danca = 0;
		for(j=0;j<50;j++)
		{
			if(letra[j]=='\0')
				break;
			if(danca==0)
			{
				if(letra[j]>=97)
				{
					printf("%c", letra[j] - 32);
					danca=1;
				}
				else if (letra[j]==32)
				{
					printf("%c", letra[j]);
				}
				else
				{
					printf("%c", letra[j]);
					danca=1;
				}
			}
			else
			{
				if(letra[j]>=97)
				{
					printf("%c", letra[j]);
					danca=0;
				}
				else if(letra[j]==32)
				{
					printf("%c", letra[j]);
				}
				else
				{
					printf("%c", letra[j]+32);
					danca=0;
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
