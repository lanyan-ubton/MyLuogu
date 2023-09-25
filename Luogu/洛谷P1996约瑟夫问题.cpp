#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int date;//数据域
	struct LNode* next;//指针域
}LNode, * LinkList;
void InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
}
void CreateList_R(LinkList &L,LinkList &p,int n)
{
	LinkList q;
	for (int i = 1; i < n + 1; i++)
	{
		InitList(q);
		q->date = i;
		q->next = p->next;
		L->next = q;
		L = L->next;
	}
}
void PrintList(LinkList L, int m)
{
	printf("该链表的输出为：\n");
	for (;;)
	{
		for (int i = 1; i < m; i++)
			L = L->next;
		if (L->next == L)
		{
			printf("%d ", L->next->date);
			break;
		}
		else
			printf("%d ", L->next->date);
		L->next = L->next->next;
	}
}
int main()
{
	LinkList L, p;
	int n, m;
	scanf("%d %d", &n, &m);
	InitList(L);
	InitList(p);
	p = L;
	CreateList_R(L, p, n);
	PrintList(L, m); 
}