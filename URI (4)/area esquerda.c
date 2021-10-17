#include <stdio.h>

int main ()
{
	double a=0.0, m[12][12];
	char t[2];
	int c,p,r,x,y,z;
	p=0, r=4;
	
	scanf("%s", &t);
	
	for(int x=0; x<12;x++)
	{
		for(int y=0;y<12;y++)
			scanf("%lf", &m[x][y]);
	}
	for (z=1;z<11;z++)
	{
		if(z<=5)
		{
			for(c=0;c<=p;c++)
			a+=m[z][c];
			p++;
		}
		else if (z>=6)
		{
			for(c=0;c<=r;c++)
			a+=m[z][c];
			r--;
		}
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
