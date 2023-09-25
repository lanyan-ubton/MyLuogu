#include<stdio.h>
int main()
{
	int N,i,j;
	scanf("%d %d %d",&N,&i,&j);
	for(int a=0;a<N;a++)
		printf("(%d,%d) ",i,a+1);
	printf("\n");
	for(int a=0;a<N;a++)
		printf("(%d,%d) ",a+1,j);
	printf("\n");
	for(int a=0;;a++)
	{
		if(j-i+1+a>0&&j-i+1+a<=N&&i-i+1+a<=N&&i-i+1+a>0)
			printf("(%d,%d) ",i-i+1+a,j-i+1+a);
		else
		{
			printf("\n");
			break;
		}
	}
	for(int a=0;;a++)
	{
		if(j-j+1+a>0&&j-j+1+a<=N&&i+j-1-a<=N&&i+j-1-a>0)
			printf("(%d,%d) ",i+j-1-a,j-j+1+a);
		else
		{
			break;
		}
	}
}