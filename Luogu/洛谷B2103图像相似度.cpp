#include<stdio.h>
int main()
{
	int m,n;
	double x,p=0;
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
			if(a[i][j]==b[i][j])
				p++;
		}
	x=p*100/(m*n);
	printf("%.2lf",x);
	return 0;
}