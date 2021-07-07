#include <stdio.h>

int main()
{
	//12km/l
	
	int tempo, velocidade;
	float litragem1 , litragem2;
	
	scanf("%d" ,&tempo);
	scanf("%d" ,&velocidade);
		
	litragem1 = (tempo * velocidade);
	litragem2 = litragem1 / 12;
	
	printf("%.3f\n" ,litragem2);
	
	return 0;
}
