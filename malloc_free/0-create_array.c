#include "main.h"

/**
*create_array - self-explanatory
*@size: size of the array
*@c: char to start the array
*Return: pointer or NULL
*/

char *create_array(unsigned int size, char c)
{
unsigned int ay;
char *arr;

arr = malloc(size * sizeof(char));
if (size != 0 && arr != NULL)
{
for (ay = 0; ay < size; ay++)
{
arr[ay] = c;
}
return (arr);
}
else
{
return (NULL);
}
}
