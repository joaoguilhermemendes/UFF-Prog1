#include <stdio.h>

int main ()
{
	double a=0.0, m[12][12];
	char t[2];
	int c,p,x,y,z;
	p=10;
	
	scanf("%s", &t);
	
	for(x=0; x<12;x++)
	{
		for(y=0;y<12;y++)
			scanf("%lf", &m[x][y]);
	}
	for (z=0;z<11;z++)
	{
		for(c=0;c<=p;c++)
			a+=m[z][c];
			p--;
	}
	if(t[0]=='S')
	{
		printf("%.1lf\n", a);
	}
	else if (t[0]=='M')
	{
		a=a/66.0;
		printf("%.1lf\n", a);
	}
	
	return 0;
}
