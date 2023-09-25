#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		scanf("%d",&m);
		if(n==0)
		{
			printf("%d",m);
			break;
		}
		if(m>0)
		{
			if(i!=n&&i!=0)
			{	
				if(i==1)
					if(m==1)
						printf("+x");
					else 
						printf("+%dx",m);
				else
					if(m==1)
						printf("+x^%d",i);
					else 
						printf("+%dx^%d",m,i);
			}
			else if(i==n&&i!=0)
			{
				if(i==1)
					if(m==1)
						printf("x");
					else 
						printf("%dx",m);
				else
					if(m==1)
						printf("x^%d",i);
					else 
						printf("%dx^%d",m,i);
			}
			else if(i==0)
				printf("+%d",m);
		}
		else if(m==0)
			continue;
		else
		{
			if(m==-1&&i!=0)
			{
				if(i==1)
					printf("-x");
				else
					printf("-x^%d",i);
			}
			else if(m!=-1&&i!=0)
			{
				if(i==1)
					printf("%dx",m);
				else
					printf("%dx^%d",m,i);
			}
			else if(i==0)
				printf("%d",m);
		}
	}
	return 0;
}