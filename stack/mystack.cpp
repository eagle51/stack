#include "mystack.h"

void init(PStack pS)
{
	pS->pTop = pS->pBot = (PNode)malloc(sizeof(Node));
	pS->pBot->next = NULL;
}

void push(PStack pS, int val)
{
	PNode pNew = (PNode)malloc(sizeof(Node));
	pNew->data = val;
	pNew->next = pS->pTop;
	pS->pTop = pNew;
}

void traverse(PStack pS)
{
	PNode p = pS->pTop;
	while (p != pS->pBot) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

void pop(PStack pS)
{
	if (pS->pTop != NULL) {
		if (pS->pTop == pS->pBot) {
			printf("ÒÑµ½Õ»µ×\n");
			return;
		}
		PNode p = pS->pTop;
		pS->pTop = p->next;
		free(p);
		p = NULL;
	}
}

void clean(PStack pS)
{
	PNode q = NULL;
	while (pS->pTop != pS->pBot){
		q = pS->pTop->next;
		free(pS->pTop);
		pS->pTop = q;
	}
}