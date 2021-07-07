#include <stdio.h>

int main()
{
	int resto, trocototal, preco, pagamento, n100, n50, n20, n10, n5, n2, n1;
	
	printf("Valor da compra: ");
	scanf("%d" ,&preco);
	printf("Valor pago: ");
	scanf("%d" ,&pagamento);
	
	trocototal = pagamento - preco;
	
	n100 = trocototal / 100;
	
	resto = trocototal % 100;
	
	n50 = resto / 50;
	
	resto = resto % 50;
	
	n20 = resto / 20;
	
	resto = resto % 20;
	
	n10 = resto / 10;
	
	resto = resto % 10;
	
	n5 = resto / 5;
	
	resto = resto % 5;
	
	n2 = resto / 2;
	
	resto = resto % 2;
	
	n1 = resto / 1;
	
	printf("\nValor da Compra: %d\n" ,preco);
	printf("Valor Pago: %d\n" ,pagamento);
	printf("Notas de 100: %d\n" ,n100);
	printf("Notas de 50: %d\n" ,n50);
	printf("Notas de 20: %d\n" ,n20);
	printf("Notas de 10: %d\n" ,n10);
	printf("Notas de 5: %d\n" ,n5);
	printf("Notas de 2: %d\n" ,n2);
	printf("Notas de 1: %d\n" ,n1);

	return 0;
}

