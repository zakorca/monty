#include "monty.h"
int push_val;
/**
 * execute_opcode - handle opcode execute
 *
 * @opcode: the opcode
 * @stack: the head
 * @line_number: number of lines
 */
void execute_opcode(char *opcode, stack_t **stack, int line_number)
{
	if (strcmp(opcode, "push") == 0)
	{
		push_helper(opcode, stack, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add_nodes(stack, line_number);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap_nodes(stack, line_number);
	}
	else if (strcmp(opcode, "nop") == 0)
	{
		nop(stack, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop_stack(stack, line_number);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint_func(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
/**
 * string_cmt - if it is comment
 * @token: token
 * @line_count: num of lines
 *
 * Return: int.
 */
int string_cmt(char *token, int line_count)
{
	if (token == NULL || token[0] == '#')
	{
		line_count++;
		return (1);
	}
	return (-1);
}
/**
 * free_stack_memo - free space
 *
 * @top_var: head
 */
void free_stack_memo(stack_t *top_var)
{
	stack_t *tmp;

	if (top_var == NULL)
		return;

	while (top_var)
	{
		tmp = top_var;
		top_var = top_var->next;
		free(tmp);
	}

	free(top_var);
}

