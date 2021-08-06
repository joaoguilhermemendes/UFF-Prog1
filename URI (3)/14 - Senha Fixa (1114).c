#include <stdio.h>

int main()
{
	int senha = 2002;
	
	int tentativa_senha;
	
	while (tentativa_senha != senha)
	{
		scanf("%d" ,&tentativa_senha);
		if (tentativa_senha != senha)
			printf("Senha invalida\n");
	}

	printf("Acesso Permitido");

	return 0;
}

