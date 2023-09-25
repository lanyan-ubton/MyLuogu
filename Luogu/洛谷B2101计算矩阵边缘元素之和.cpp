#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	int sum=0;
	for(int i=0;i<m;i++)
	{
		if(i==0||i==m-1)
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				sum+=a[i][j];
			}
		else
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if(j==0||j==n-1)
					sum+=a[i][j];
			}
	}
	printf("%d",sum);
	return 0;
}