#include "monty.h"
/**
 * sub - add 2 nodes & pop the last.
 *
 * @stack: head
 * @line: line
 * Return: void
 */
void sub(stack_t **stack, uint line)
{
	int subnum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	subnum = (*stack)->n - (*stack)->next->n;
	pop_stack(stack, line);
	(*stack)->n = subnum;
}
