#include<stdio.h>
#include<math.h>
int freedom(int m,int p,int q,int a[1024][1024])
{
	if(m==1)
		return 1;
	for(;p<m/2;p++)
		for(;q<m/2;q++)
			a[p][q]={0};
	freedom(m/2,p-m,q,a[1024][1024]);
	freedom(m/2,p+1,q-m,a[1024][1024]);
	freedom(m/2,p+1,q+1,a[1024][1024]);
}
int main()
{
	int n;
	scanf("%d",&n);
	int m=pow(2,n);
	int a[1024][1024];
	int p=0,q=0;
	freedom(m/2,p,q,a[1024][1024]);
}