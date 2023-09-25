#include<stdio.h>
void Quicksort(int* a, int begin, int end)
{
	int tmp, t;
	int i = begin, j = end;
	if (begin < end)
	{
		int m = i + (j - i) / 2;
		if (a[i] > a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		if (a[m] > a[j])
		{
			t = a[m];
			a[m] = a[j];
			a[j] = t;
		}
		if (a[m] > a[i])
		{
			t = a[i];
			a[i] = a[m];
			a[m] = t;
		}
		int temp = a[i];
		while (i < j)
		{
			while (a[j] >= temp && j > i)
				j--;
			a[i] = a[j];
			while (a[i] <= temp && j > i)
				i++;
			a[j] = a[i];
		}
		a[i] = temp;
		tmp = i;
		Quicksort(a, begin, tmp - 1);
		Quicksort(a, tmp + 1, end);
	}
}
int main()
{
	int m;
	scanf("%d", &m);
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