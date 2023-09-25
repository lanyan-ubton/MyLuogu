#include<stdio.h>
int main()
{
	int n;
	int a[100001];
	int max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<n;j++)
		if(a[j]>max)
			max=a[j];
	int b[100001]={0};
	for(int k=0;k<n;k++)
	{
		if(a[k]<=max)
			b[a[k]]++;
	}
	for(int m=0;m<max+1;m++)
	{
		printf("%d\n",b[m]);
	}
	return 0;
}