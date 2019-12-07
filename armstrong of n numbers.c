#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,num,n,l=0,r;
	scanf("%d",&n)
;	num=n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,l);
		n=n/10;
	}
}
