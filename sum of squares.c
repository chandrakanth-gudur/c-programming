#include<stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
	
}
