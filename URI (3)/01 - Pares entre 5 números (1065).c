#include <stdio.h>

int main() 
{
 	int quant_num,num,cont;
  	cont=0;
    
	for(quant_num=1 ; quant_num<=5 ; quant_num++)
	{
        scanf("%d",&num);
        if(num%2==0)
            cont++;
    }
    
	printf("%d valores pares\n",cont);

    return 0;
}
