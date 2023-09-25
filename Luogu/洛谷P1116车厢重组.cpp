#include<stdio.h>
int main()
{
	int N;
	long long int num = 0;
	scanf_s("%d", &N);
	int a[10001];
	for (int i = 1; i <= N; i++)
		scanf_s("%d", &a[i]);
	for (int j = 1; j < N; j++)
		for (int k = 1; k < N; k++)
		{
			if (a[k] > a[k + 1])
			{
				int t = a[k];
				a[k] = a[k + 1];
				a[k + 1] = t;
				num++;
			}
		}
	printf("%lld", num);
	return 0;
}