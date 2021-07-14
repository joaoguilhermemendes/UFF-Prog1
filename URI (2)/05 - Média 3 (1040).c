#include <stdio.h>

int main() 
{
	//n1 - peso 2
	//n2 - peso 3
	//n3 - peso 4
	//n4 - peso 1
	
	float n1 ,n2 ,n3 ,n4;
	float media ,nota_exame;
	
    scanf("%f %f %f %f", &n1 ,&n2 ,&n3 ,&n4);
    
   	media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
   	
    printf("Media: %.1f\n", media);
    
    if (media >= 7)
	{
        printf("Aluno aprovado.\n");
    }
    
    else if (media >= 5)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
		scanf("%f", &nota_exame);
        
        if (nota_exame + media / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");
    }
        printf("Media final: %.1f\n", (nota_exame + media ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
	    }

    return 0;
}

