#include <stdio.h>
#include <string.h>

int main ()
{
	int n, i, j, l;
	char linha[52], esc[52];
	
	scanf("%d", &n);
	
	getchar();
	
	for(;n>0;n--)
	{
		fgets(linha,52,stdin);
		l=strlen(linha)-1;
		
		for(i=0,j=0;i<l;++i)
		{
			if(linha[i] != ' ' && (!i || linha[i-1]==' '))
			{
				esc[j++] = linha[i];
			}
		}
		esc[j] = '\0';
		
		puts(esc);
	}
	
	return 0;
}
