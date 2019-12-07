#include<stdio.h>
int main()
{
	int i,n,r,product=1,sum=0,num;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;	
	}
	if(num==sum)
	printf("it is armstrong number");
	else
	printf("it is not an armstrong number");
}
