#include <stdio.h>

int main()
{
	float ang1, ang2, ang3;
	
	printf("Digite o primeiro angulo: ");
	scanf("%f/n" ,&ang1);
	printf("Digite o segundo angulo: ");
	scanf("%f/n" ,&ang2);
	
	//A soma dos ângulos internos de um triângulo é sempre de 180º
	
	ang3 = 180 - (ang1 + ang2);
	
	printf("O terceiro angulo desse triangulo eh de [%.2f]" ,ang3);

	return 0;
}

