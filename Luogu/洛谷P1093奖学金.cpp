#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int id;
	int cn;
	int math;
	int eg;
	int num;
	Student* next;
}*Score;

//初始化
void InitList(Score& L)
{
	L = (Student*)malloc(sizeof(Student));
	L->next = NULL;
}

void CreateList_R(Score& stu,int n)
{
	Score L;
	L = stu;
	for (int i = 0; i < n; i++)
	{
		Score p;
		InitList(p);
		p->id = i + 1;
		scanf("%d %d %d", &p->cn, &p->math, &p->eg);
		p->num = p->cn + p->math + p->eg;
		p->next = NULL;
		L->next = p;
		L = p;
	}
}

void InsertSort(Score& a)
{
	Score p, q, pre; 
	InitList(p);
	InitList(pre);
	InitList(q);
	p = a->next->next;
	a->next->next = NULL;
	while (p)
	{
		q = p->next;
		pre = a;
		while (pre->next && pre->next->num >= p->num)
			pre = pre->next;
		p->next = pre->next;
		pre->next = p;
		p = q;
	}
}

void PrintList(Score L)
{
	for (int i = 0; i < 5; i++)
	{
		L = L->next;
		printf("%d %d\n", L->id, L->num);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	Score stu;
	InitList(stu);
	CreateList_R(stu, n);
	InsertSort(stu);
	Score p, q;
	InitList(p);
	InitList(q);
	p = stu;
	while (p->next->next)
	{
		if (p->next->num == p->next->next->num && p->next->cn < p->next->next->cn)
		{
			q = p->next;
			p->next = p->next->next;
			q->next = p->next->next;
			p->next->next = q;
		}
		p = p->next;
	}
	PrintList(stu);
	return 0;
}