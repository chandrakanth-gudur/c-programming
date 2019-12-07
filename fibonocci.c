#include<stdio.h>
int main()
{
	int i,x,x1=0,n,x2=1;
	scanf("%d",&n);
	i=1;
	do
	{
		x=x1+x2;
		printf("%d",x);
		x1=x2;
		x2=x;
		i++;
	}while(i<=n-2);
	return 0;
	
}
