#include <stdio.h>

int main()
{
	double num;
	
	scanf("%lf" ,&num);
	
	if (num < 0 || num>100) {
		printf("Fora do intervalo\n");
	}
	
	if (num <= 25 && num>=0) {
		printf("Intervalo [0,25]\n");
	}
		
	if (num > 25 && num <= 50) {
		printf("Intervalo (25,50]");
	}
	
	if (num>50  && num<=75) {
		printf("Intervalo (50,75]");
	}
		
	if (num>70 && num<=100) {
		printf("Intervalo (75,100]");
	}

	return 0;
}

