#include "holberton.h"
/**
 *  * print_alphabet_x10 - prints alphabet 10 times
    */
void print_alphabet_x10(void)
{
		int i;
			char a;

				for (i = 0; i < 10; i++)
						{
i									for (a = 'a'; a <= 'z'; a++)
												{
																_putchar(a);
																		}
											_putchar('\n');
												}
}
