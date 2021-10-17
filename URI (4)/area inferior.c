#include <stdio.h>

int main ()
{
	double a=0.0, m[12][12];
	char t[2];
	int c,p,q,x,y,z;
	p=6, q=5;
	
	scanf("%s", &t);
	
	for(int x=0; x<12;x++)
	{
		for(int y=0;y<12;y++)
			scanf("%lf", &m[x][y]);
	}
	for(int z=7;z<12;z++)
	{
		for(c=q;c<=p;c++)
			a+=m[z][c];
			p++;
			q--;
	}
	if(t[0]=='S')
	{
		printf("%.1lf\n", a);
	}
	else if (t[0]=='M')
	{
		a=a/30.0;
		printf("%.1lf\n", a);
	}
	
	return 0;
}
