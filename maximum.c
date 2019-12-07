#include<stdio.h>
int main()
{
	int i,n,r,min=9;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r<min)
		{
			min=r;
		}
		n=n/10;
	}
	printf("min digit is %d",min);
}
