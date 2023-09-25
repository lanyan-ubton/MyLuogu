#include<stdio.h>
void Quicksort(int* a, int begin, int end)
{
	int tmp;
	int i = begin, j = end;
	if (begin < end)
	{
		int temp=a[i];
		while (i<j)
		{
			while (a[j] >= temp && j > i)
				j--;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			while (a[i]<=temp && j>i)
				i++;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		tmp = i;
		Quicksort(a, begin, tmp - 1);
		Quicksort(a, tmp + 1, end);
	}
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
	Quicksort(a, 0, m - 1);
	for (int j = 0; j < m; j++)
	{
		printf("%d ", a[j]);
	}
	return 0;
}