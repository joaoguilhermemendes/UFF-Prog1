#include <stdio.h>

int main()
{
	float litragemsubida ,litragemdescida ,kmsubida ,kmdescida;
	float total;
	
	printf("Quandos km/l para realizar a subida? ");
	scanf("%f" ,&litragemsubida);
	
	printf("Quandos km/l para realizar a descida? ");
	scanf("%f" ,&litragemdescida);
	
	printf("Quandos km ate o topo?");
	scanf("%f" ,&kmsubida);
	
	printf("Quandos km ate a base?");
	scanf("%f" ,&kmdescida);
	
	total = ((kmsubida/litragemsubida) + (kmdescida/litragemdescida)) * 2 ;
	
	printf("O total de gasto e de [%.2f]" ,total);
	
	return 0;
}

