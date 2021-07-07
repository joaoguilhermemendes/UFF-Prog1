#include <stdio.h>

int main() 
{
	int valor, troco, notacem, notacinquenta, notavinte, notadez, notacinco, notadois, notaum;
	
	scanf("%d",&valor);
	
	troco = valor;
	
	notacem = troco / 100;
	
	troco = troco - (notacem * 100);
	
	notacinquenta = troco / 50;
	
	troco = troco - (notacinquenta * 50);
	
	notavinte = troco / 20;
	
	troco = troco - (notavinte * 20);
	
	notadez = troco /10;
	
	troco = troco - (notadez * 10);
	
	notacinco = troco / 5;
	
	troco = troco - (notacinco * 5);
	
	notadois = troco / 2;
	
	troco = troco - (notadois * 2);
	
	printf("%d",valor);
	printf("%d nota(s) de R$ 100,00" ,notacem);
	printf("%d nota(s) de R$ 50,00" ,notacinquenta);
	printf("%d nota(s) de R$ 20,00" ,notavinte);
	printf("%d nota(s) de R$ 10,00" ,notadez);
	printf("%d nota(s) de R$ 5,00" ,notacinco);
	printf("%d nota(s) de R$ 2,00" ,notadois);
	printf("%d nota (s) de R$ 1,00\n" ,troco);


	return 0;

}

