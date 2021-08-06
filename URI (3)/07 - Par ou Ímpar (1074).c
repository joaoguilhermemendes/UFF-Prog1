#include <stdio.h>

int main()
{
	int num, num2 ,cont;
	
	scanf("%d" ,&num);
	
	while (cont < num)
	{
		scanf("%d" ,&num2);
		
		if (num2 == 0)
			printf("NULL\n");
		
		else 
		{
			if (num2 % 2 == 0)
			{
				printf("EVEN ");
			}
				
			
			if (num2 % 2 != 0)
			{
				printf("ODD ");
			}
				
			
			if (num2 < 0)
			{
				printf("NEGATIVE\n");
			}
				
				
			if (num2 > 0)
			{
				printf("POSITIVE\n");
			}
				
		}
		
		cont++;
	}


	return 0;
}

