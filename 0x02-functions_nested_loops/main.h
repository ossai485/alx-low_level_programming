#include "stdio.h"
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');
return (0);
}
