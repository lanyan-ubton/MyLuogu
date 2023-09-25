#include<stdio.h>
int main()
{
	int n;
	int a[101];
	int lenth=1,max=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<n-1;j++)
	{
		if(a[j]==a[j+1])
			lenth++;
		else
		{
			if(lenth>max)
				max=lenth;
			lenth=1;
		}
	}
	printf("%d",max);
	return 0;
}