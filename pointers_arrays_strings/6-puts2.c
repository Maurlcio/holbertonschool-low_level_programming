#include "main.h"
#include "2-strlen.c"

/**
*puts2 - prints every other character of a string
*@str: pointer
*/

void puts2(char *str)
{
int evryotr;

for (evryotr = 0; evryotr < _strlen(str); evryotr++)
{
if (evryotr % 2 == 0)
{
putchar(str[evryotr]);
}
}
putchar('\n');
}
