#include<stdio.h>
int main()
{
	long long n,i;
	long long total;
	scanf("%lld",&n);
	long long a[n]={0};
	for(i=2;;i++)
	{
		if(n>=i)
		{
			n-=i;
			a[i-2]=i;
		}
		else
		{
			if(n==1)
				a[i-2]=i+1;
			else
				a[n-2]=0;
			break;
		}
	}
	for(int j=0;j<i-2;j++)
	{
		if(a[j]==0)
			continue;
		else
		{
			total*=a[j];
			printf("%d ",a[j]);
		}
	}
	printf("\n%lld",total);
}