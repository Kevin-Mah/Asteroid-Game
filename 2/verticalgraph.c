#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( void )
{
	int number[80];
	int largest;
	int s = 0;
	int len =0;
	
	for (int i=0; i<80; i++)
	{
		number[i] = 0;
	}
	while (s!= EOF)
	{
		s=scanf("%d", &number[len]);
		len++;
		largest = number[0];
		for(int i=0; i<80; i++)
		{
			if (largest < number[i])
			{
				largest = number[i];
			}
		}
		if(s == EOF)
		{
			for(int x=0; x<largest; x++)
			{
				for (int y=0; y<len-1; y++)
				{
					if (number[y] >= largest-x)
					{
						printf("#");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			break;
		}
	}
}
	
