#include <stdio.h>
#include <math.h>
 
int main() 
{
	int a ,b ,c ,ab_maior ,abc_maior;
	
	scanf("%d %d %d" ,&a ,&b ,&c);
	
	ab_maior = (a+b+abs(a-b)) / 2 ;
	
	abc_maior = (ab_maior+c+abs(ab_maior-c))/2;
	
	printf("%d eh o maior\n" ,abc_maior);
	 
    return 0;
}
