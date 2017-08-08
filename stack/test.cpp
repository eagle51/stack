#include "mystack.h"
#include <stdio.h>

int main(void)
{
	Stack s;
	init(&s);
	push(&s, 5);
	push(&s, 4);
	push(&s, 3);
	push(&s, 2);
	push(&s, 1);
	traverse(&s);
	pop(&s);
	traverse(&s);
	clean(&s);
	pop(&s);
	traverse(&s);
	system("pause");
	return 0;
}