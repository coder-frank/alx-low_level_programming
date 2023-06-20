#include <stdio.h>

/**
 * jack_bauer - prints out a 24 hours clock
 * Description: The function takes a displays a clock from 00:00 to 23:59
 * Return: the clock
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
