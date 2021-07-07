#include <stdio.h>

int main()
{
	float mh, kmh; //milhas por hora, Quilômetro por hora 
	
	printf("Insira a velocidade em milhas por hora para conversao: ");
	scanf("%f" ,&mh);
	
	//para um resultado aproximado, multiplique o valor de velocidade por 1,609
	kmh = mh * 1.609;
	
	printf("\n[%.2f m/p] ---- %.2f k/m" ,mh ,kmh);
	
	

	

	return 0;
}

