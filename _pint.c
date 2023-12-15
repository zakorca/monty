#include "monty.h"
/**
 * pint_func - code checking ..
 * @stack: pointer to stack
 * @line_num: line nmbr
 *
 * Return: void
 */
void pint_func(stack_t **stack, unsigned int line_num)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

