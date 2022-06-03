#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
<<<<<<< HEAD
putchar('\n');
=======
putchar(n);
>>>>>>> 35653c64389a6beca3372f72bf8fc67d7d4947fc
return (0);
}
