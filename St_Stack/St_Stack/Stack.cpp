#include <stdio.h>
#include <string.h>

typedef struct StackNode {
	int data;
	struct StackNode *link;
} StackNode;

typedef struct {
	StackNode *top;
} LinkedStackType;

void init(LinkedStackType *s)
{
	s->top = NULL;
}

void push(LinkedStackType *s, int data)
{
	StackNode *temp = new StackNode();
	if (temp == NULL)
	{
		fprintf(stderr, "Memory Allocation Error!\n");
		return;
	}
	else
	{
		temp->data = data;
		temp->link = s->top;
		s->top = temp;
	}
}