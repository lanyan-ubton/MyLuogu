#include<stdio.h>
int main()
{
	long long n,m,a;
	scanf("%lld %lld %lld",&m,&n,&a);
	if(m%a==0&&n%a==0)
		printf("%lld",(m/a)*(n/a));
	else if(m%a!=0&&n%a==0)
		printf("%lld",(m/a+1)*(n/a));
	else if(m%a==0&&n%a!=0)
		printf("%lld",(m/a)*(n/a+1));
	else
		printf("%lld",(m/a+1)*(n/a+1));
	return 0;
}