#include<stdio.h>
/*void Delete(int *a,int *b,int n)
{
	int m=0;
	for(int i=0;i<n;i++)
	{
		if(b[a[i]-10]==1)
		{
			m++;
			for(int j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
		else b[a[i]-10]++;
	}
	for(int k=0;k<n-m;k++)
		printf("%d ",a[k]);
}*/
int main()
{
	int n;
	int a[20000],b[91]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]-10]++;
		if(b[a[i]-10]==1)
			printf("%d ",a[i]);
	}
	//Delete(a,b,n);
	return 0;
}