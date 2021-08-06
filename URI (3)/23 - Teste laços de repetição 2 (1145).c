#include <stdio.h>

int main()
{
	int numero_teste ,ct;
	
	scanf("%d" ,&numero_teste);
	
	ct = numero_teste /2;
	int ct_primo = 0;
	
	while (numero_teste > ct)
	{
		int primo = numero_teste % ct;
		
		if (primo == 0)
		{
			ct_primo++;
		}
		
		else ct_primo = ct_primo + 0;
		
		ct++;
	}


	return 0;
}

