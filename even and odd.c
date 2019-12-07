#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("even numbers are ");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d",i);
	}
	}
	printf("\nodd numbers are ");
	for(i=1;i<=n;i=i+2)
	{
		printf("%d",i);
	}
	return 0;
}
