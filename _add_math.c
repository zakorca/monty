#include "monty.h"

/**
 * add_nodes - add 2 nodes & pop the last.
 * @stack: head
 * @line_add: line
 */
void add_nodes(stack_t **stack, uint line_add)
{
	int sum_node;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_add);
		exit(EXIT_FAILURE);
	}
	sum_node = (*stack)->n + (*stack)->next->n;
	pop_stack(stack, line_add);
	(*stack)->n = sum_node;
}
