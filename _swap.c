#include "monty.h"
/**
 * swap_nodes - swap the first 2 elements of the stack.
 * @stack: head
 * @line_swap: line
 */
void swap_nodes(stack_t **stack, unsigned int line_swap)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_swap);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
}

