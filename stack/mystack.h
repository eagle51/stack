#ifndef __MYSTACK_H
#define __MYSTACK_H
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node ,*PNode;

typedef struct stack {
	PNode pTop;
	PNode pBot;
}Stack, *PStack;

void init(PStack pS);
void push(PStack pS,int val);
void traverse(PStack pS);
void pop(PStack pS);
void clean(PStack pS);
#endif
