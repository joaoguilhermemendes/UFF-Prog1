#include <stdio.h>

int main()
{

	/* Condição de Existência do Triângulo:
	Se a soma das medidas de dois deles é sempre maior que a medida 
	do terceiro, então, eles podem formar um triângulo*/
	
	float ld1, ld2 ,ld3;
	
	scanf("%f %f %f" ,&ld1 ,&ld2 ,&ld3);
	
	if (ld1+ld2>ld3 && ld1+ld3>ld2 && ld2+ld3>ld1)
	{
		float perimetro = (ld1 + ld2 + ld3);
		printf("Perimetro = %.1f\n" ,perimetro);
		
	}
	
	else 
	{
		float area = ((ld1+ld2)*ld3) / 2;
		printf("Area = %.1f\n" ,area);
	}

	return 0;
}

