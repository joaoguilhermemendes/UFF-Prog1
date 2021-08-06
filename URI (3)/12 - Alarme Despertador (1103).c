#include <stdio.h>

int main ()
{
	while(1)
	{
		int hora1, m1, hora2, m2;
		int min;
		
		scanf("%d %d %d %d", &hora1, &m1, &hora2, &m2);
		
		if(!hora1 && !m1 && !hora2 && !m2)
			break;
			
		if(hora1>hora2 || hora1 == hora2 && m1>m2)
			hora2+=24;
			
		min= (hora2*60 + m2) - (hora1*60 + m1);
		
		printf("%d\n", min);
	}
	
	return 0;
}
