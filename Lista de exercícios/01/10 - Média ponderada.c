#include <stdio.h>

int main()
{
	float nota1 ,nota2 ,nota3;
	float media1 ,media2 ,media3;
	float mediageral;
	
	printf("Insira as notas: ");
	scanf("%f %f %f" ,&nota1 ,&nota2 ,&nota3);
	
	printf("Insira o peso das notas: ");
	scanf("%f %f %f" ,&media1 ,&media2 ,&media3);
	
	mediageral = (nota1*media1 + nota2*media2 + nota3*media3)/(media1 + media2 + media3);
	
	printf("\nA media das notas eh de [%.2f]" ,mediageral);

	return 0;
}

