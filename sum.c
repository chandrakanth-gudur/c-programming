#include<stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum is %d",sum);
return 0;	
}
