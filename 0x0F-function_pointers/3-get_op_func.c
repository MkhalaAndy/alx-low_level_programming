#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - function
  * @s: string
  *
  * Return: .
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int z = 0;

	while (z < 5)
	{
		if (strcmp(s, ops[z].op) == 0)
			return (ops[z].f);

		z++;
	}

	return (0);
}
