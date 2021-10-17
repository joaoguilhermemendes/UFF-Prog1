#include <stdio.h>
#include <string.h>

int main ()
{
	int ene, n, i, j;
	int len,len2;
	char st[51], st2[51], r[101];
	
	scanf("%d",&ene);
	
	for(n=0;n<ene;++n)
	{
		scanf("%s%s", st, st2);
		
		len=strlen(st);
		len2=strlen(st2);
	
		for(i=0,j=0;i<len && i<len2;++i,j+=2)
		{
			r[j] = st[i];
			r[j+1] = st2[i];
		}
		
		for(;i<len;++i,++j)
		{
			r[j]=st[i];
		}
		
		for(;i<len2;++i,++j)
		{
			r[j]=st2[i];
		}
		
		r[j]='\0';
		
		puts(r);
	}
		
	return 0;
}
