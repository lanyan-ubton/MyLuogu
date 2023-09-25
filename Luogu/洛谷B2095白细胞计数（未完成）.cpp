#include<stdio.h>
#include<math.h>
void DeleteMaxandMin(double *a,int n)
{
	double max=a[0],min=a[0];
	int x=0,y=0;
	double ave=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
			x=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			y=i;
		}
	}
	for(int j=0;j<n;j++)
	{
		if(j!=x&&j!=y)
		{
			ave+=a[j];
		}
	}
	ave/=n-2;
	max=0;
	for(int k=0;k<n;k++)
	{
		if(k!=x&&k!=y&&abs(a[k]-ave)>max)
		{
			max=abs(a[k]-ave);
		}
	}
	printf("%.2lf %.2lf",ave,max);
}
int main()
{
	int n;
	double a[300];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	DeleteMaxandMin(a,n);
	return 0;
} 
