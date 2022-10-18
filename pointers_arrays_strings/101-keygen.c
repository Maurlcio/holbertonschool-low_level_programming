#include "main.h"

/**
*main - dont think i need to even comment on this but ahh what the hell
*Return: this was genuinely pretty fun compared to the other one lol
*/

int main(void)
{
int a;
int c;

srand(time(NULL));
for (c = 2772; c > 122; )
{
a = (rand() % 125) + 1;
printf("%c", a);
c -= a;
}
printf("%c", c);
return (0);
}
