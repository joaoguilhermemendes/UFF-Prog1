#include <stdio.h>
#include <string.h>

int main ()
{
	int n, i, j, l, h;
	char linha[102], d[101];
	
	scanf("%d", &n);
	getchar();
	
	for(i=0;i<n;++i)
	{
		fgets(linha, 102, stdin);
		l=strlen(linha)-1;
		h=l/2 + l%2;
		
		for(j=h-1;j>=0;--j)
			d[h-j-1]=linha[j];
			
		for(j=l-1;j>=h;--j)
			d[l-j-1+h]=linha[j];
			
		d[l]='\0';
		puts(d);
	}
	
	return 0;
}
