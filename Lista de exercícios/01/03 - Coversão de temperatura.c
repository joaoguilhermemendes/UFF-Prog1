#include <stdio.h>

int main()
{
	float celsius, fahrenheit, kelvin;

	
	printf("Digite o valor em Celsius para conversao: ");
	scanf("%f" , &celsius);
	
	//(0 °C × 9/5) + 32 = 32 °F	
	fahrenheit = (celsius * 9/5) + 32;
	
	//0 °C + 273,15 = 273,15 K
	kelvin = celsius + 273,15; 
	
	printf("\nKELVIN ----- %.2f\n" ,kelvin);
	printf("FAHRENHEIT - %.2f\n" ,fahrenheit);
	
	return 0;
}

