#ifndef MONTY_H
#define MONTY_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int push_val;

#define uint unsigned int

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;

	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int);
void swap_nodes(stack_t **stack, unsigned int);
void free_stack_memo(stack_t *top);
void pint_func(stack_t **stack, unsigned int);
void pall(stack_t **stack, unsigned int);
void push_helper(char *opcode, stack_t **stack, int line_number);
void nop(stack_t **stack, unsigned int);
void pop_stack(stack_t **stack, uint);
void add_nodes(stack_t **stack, uint);
void execute_opcode(char *opcode, stack_t **stack, int line_number);
int string_cmt(char *token, int line_count);
int check_integer(char *str);

#endif
