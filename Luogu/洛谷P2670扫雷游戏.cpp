#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	getchar();
	char b[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%c",&b[i][j]);
			if(b[i][j]=='?')
				b[i][j]='0';
		}
		getchar();
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(b[i][j]=='*')
			{
			if (j != m - 1&& b[i][j + 1]!='*')
					b[i][j + 1]++;
				if (j != 0 && b[i][j - 1] != '*')
					b[i][j - 1]++;
				if (i > 0 && b[i - 1][j] != '*')
					b[i - 1][j]++;
				if (i < n - 1 && b[i + 1][j] != '*')
					b[i + 1][j]++;
				if (j != 0 && i > 0 && b[i - 1][j - 1] != '*')
					b[i - 1][j - 1]++;
				if (j != m - 1 && i > 0 && b[i - 1][j + 1] != '*')
					b[i - 1][j + 1]++;
				if (i < n - 1 && j != 0 && b[i + 1][j - 1] != '*')
					b[i + 1][j - 1]++;
				if (j != m - 1 && i < n - 1 && b[i + 1][j + 1] != '*')
					b[i + 1][j + 1]++;
			}
		}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%c",b[i][j]);
				
		}
		printf("\n");
	}
	return 0;
}