#include "monty.h"
/**
 * pop_stack - function removes the top elements.
 *
 * @stack: head
 * @line_pop: line
 */
void pop_stack(stack_t **stack, uint line_pop)
{
	stack_t *vartmp;

	vartmp = *stack;
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_pop);
		exit(EXIT_FAILURE);
	}
	vartmp = vartmp->next;
	free(*stack);
	*stack = vartmp;
}
