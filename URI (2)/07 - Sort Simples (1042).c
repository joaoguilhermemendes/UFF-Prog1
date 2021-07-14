#include <stdio.h>

int main()
{
	int num1, num2 ,num3;
	int maior, menor, medio;
	
	scanf ("%d %d %d" ,&num1 ,&num2 ,&num3);
	
	//Verificação [num1]
	if (num1>num3 && num1>num2)
		maior = num1;
	else if (num1<num3 && num1<num2)
		menor = num1;
	else if (num1>num3 || num1>num2)
		medio = num1;
			
	//Verificação [num2]
	if (num2>num3 && num2>num1)
		maior = num2;
	else if (num2<num3 && num2<num1)
		menor = num2;
	else if (num2>num3 || num2>num1)
		medio = num2;

	//Verificação [num3]
	if (num3>num2 && num3>num1)
		maior = num3;
	else if (num3<num2 && num3<num1)
		menor = num3;
	else if (num3>num2 || num3>num1)
		medio = num3;
			
	printf("%d\n" ,menor);
	printf("%d\n" ,medio);
	printf("%d\n" ,maior);
	
	printf("\n");
	
	printf("%d\n" ,num1);
	printf("%d\n" ,num2);
	printf("%d\n" ,num3);

	return 0;
}

