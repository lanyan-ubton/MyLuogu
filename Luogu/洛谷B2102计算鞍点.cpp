#include<stdio.h>
int main()
{
	int a[5][5];
	int b=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(int k=0;k<5;k++)
	{
		int max=a[k][0];
		int i=0;
		int m;
		for(m=0;m<5;m++)
			if(a[k][m]>max)
			{
				max=a[k][m];
				i=m;
			}
		int min=a[0][i];
		for(int n=0;n<5;n++)
		{
			if(a[n][i]<min)
				min=a[n][i];
		}
		if(min==a[k][i])
		{
			printf("%d %d %d ",k+1,i+1,min);
			b++;
		}
	}
	if(b==0)
		printf("not found");
	return 0;
}