#include <stdio.h>
#include <unistd.h>

/**
 * main - writes specific text.
 * Return: Always 0, Never Zero.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
