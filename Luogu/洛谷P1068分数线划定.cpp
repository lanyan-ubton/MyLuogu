#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Student
{
	int id;
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
		scanf("%d %d", &p->id, &p->num);
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

void PrintList(Score L,int n)
{
	while(L->num>=n)
	{
		printf("%d %d\n", L->id, L->num);
		L = L->next;
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
	int n,m,score=0;
	scanf("%d %d", &n,&m);
	m=floor(m*1.5);
	Score stu;
	InitList(stu);
	CreateList_R(stu, n);
	InsertSort(stu);
//	printf("HELLO\n");
//	PrintList(stu);
//	printf("HELLO\n");
	Score p, q, r;
	InitList(p);
	InitList(q);
	InitList(r);
	p = stu;
	r = stu;
	while (p->next->next)
	{
		if (p->next->num == p->next->next->num)
		{
			q = p->next;
			p->next = p->next->next;
			q->next = p->next->next;
			p->next->next = q;
		}
		p = p->next;
	}
	for(int i=1;r->next->next;i++,r=r->next)
	{
		if(i==m)
		{
			score=r->num;
			m-=1;
		}
		if(r->num<score)
		{
			break;
		}
		if(r->num==score)
		{
			m++;
		}
	}
	printf("%d %d\n",score,m);
	PrintList(stu->next,score);
	return 0;
}