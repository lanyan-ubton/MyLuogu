#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[n]={0};
	for(int j=0;j<n-1;j++)
	{
		if(abs(a[j]-a[j+1])>=1&&abs(a[j]-a[j+1])<=n-1)
			b[j]=1;
	}
	for(int k=1;k<n-1;k++)
	{
		if(b[k]==0)
		{
			printf("Not jolly");
			return 0;
		}	
	}
	printf("Jolly");
	return 0;
}