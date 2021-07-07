#include <stdio.h>

int main()
{
	int distancia;
	float combustivel ,gasto;
	
	scanf("%d" ,&distancia);
	scanf("%f" ,&combustivel);
	
	gasto = distancia / combustivel ;
	
	printf("%.3f km/l\n" ,gasto);
	
	return 0;
}
