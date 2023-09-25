#include<stdio.h>
int main()
{
	int m,n;
	int a[5][5];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	int b[5];
	for(int k=0;k<5;k++)
		b[k]=a[m-1][k];
	for(int i=0;i<5;i++)
	{
		a[m-1][i]=a[n-1][i];
		a[n-1][i]=b[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
		
	return 0;
}