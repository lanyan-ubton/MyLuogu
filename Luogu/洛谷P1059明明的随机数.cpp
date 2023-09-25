#include<stdio.h>
#include<stdlib.h>
typedef struct Count
{
	int number;
	struct Count* next;
}*C;
int main()
{
	int N;
	scanf("%d", &N);
	C a = (Count*)malloc(sizeof(Count*)),r=a;
	for (int i = 0; i < N; i++)
	{
		C p = (Count*)malloc(sizeof(Count*));
		scanf("%d", &p->number);
		p->next = NULL;
		r->next = p;
		r = r->next;
	}
	for (int j = 0; j < N-1; j++)
	{
		int num = N - j - 1;
		C q = a->next,p = q->next,tail=a;
		while(num--)
		{
			if (q->number > p->number)
			{
				q->next = p->next;
				p->next = q;
				tail->next = p;
			}
			tail = tail->next;
			q = tail->next;
			p = q->next;
		}
	}
	int n = N;
	C p = a->next;
	while (p->next!=NULL)
	{
		if (p->number == p->next->number)
		{
			p->next = p->next->next;
			N--;
		}
		if (p->number != p->next->number)
		{
			p = p->next;
		}
	}
	printf("%d\n", N);
	a = a->next;
	while (a)
	{
		printf("%d ", a->number);
		a = a->next;
	}
	return 0;
}