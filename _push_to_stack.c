#include "monty.h"
/**
 * push_helper - function push helper
 * @opcode: the opcode
 * @stack: the head
 * @line_number: number of lines
 */
void push_helper(char *opcode, stack_t **stack, int line_number)
{
	int n;

	opcode = strtok(NULL, " \t\n");
	if (!opcode || check_integer(opcode) == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(opcode);
	push_val = n;
	push(stack, line_number);
}
/**
 * push - add node in the begginin of the stack
 * @stack: head stack
 * @line_number: void
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = push_val;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
