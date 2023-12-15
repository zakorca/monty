#include "monty.h"
/**
 * main - the main function
 * @argc: C arg
 * @argv: V arg
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	char buffer[1024];
	int line_number;
	FILE *file;
	char *opcode;

	line_number = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 1024, file))
	{
		line_number++;
		opcode = strtok(buffer, " \t\n");
		if (string_cmt(opcode, line_number) == 1)
		{
			continue;
		}
		if (opcode)
		{
			execute_opcode(opcode, &stack, line_number);
		}
	}
	fclose(file);
	free_stack_memo(stack);
	return (0);
}

