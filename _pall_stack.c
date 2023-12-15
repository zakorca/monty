#include "monty.h"
/**
 * pall - print elements of stack from the top.
 * @stack: the head
 * @line_number: (void)
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

