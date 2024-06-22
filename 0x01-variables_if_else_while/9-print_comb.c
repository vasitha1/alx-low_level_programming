#include  <stdio.h>

/**
 * main-entry point
#include  <stdio.h>
 
 /**
  *  * main-entry point
  *   *
  *    * Description:Write
  *     * Return: Always 0 (sucess)
  *     */*
 * Description:Write
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int v = 0;

	while (v < 10)
	{
		putchar(v + '0');
		if (v != 9)
		{
			putchar(',');
			putchar(' ');
		}

		v++;
	}

	putchar('\n');

	return (0);
}
