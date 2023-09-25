#include<stdio.h>
int main()
{
	long long int N, B;
	scanf("%lld %lld", &N, &B);
	int H[20000], num = 0, j = 0;
	for (int i = 0; i < N; i++)
		scanf("%d", &H[i]);
	while (B > 0)
	{
		int max = 0;
		for (j = 0; j < N; j++)
		{
			if (H[j] > H[max])
				max = j;
		}
		B -= H[max];
		H[max] = 0;
		num++;
	}
	printf("%d", num);
	return 0;
}