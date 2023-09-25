#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf %lf",&x,&y);
	if(x>y)
		printf("No");
	if(x<y)
		printf("Yes");
	if(x==y)
		printf("equal probability");
	return 0;
}