#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int fH;
	int sH;
	int fM;
	int sM;

	for (fH = 0; fH < 3; fH++)
	{
		for (sH = 0; sH < 4; sH++)
		{
			for (fM = 0; fM < 6; fM++)
			{
				for (sM = 0; sM < 10; sM++)
					printf("%d%d:%d%d\n", fH, sH, fM, sM);
			}
		}
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
