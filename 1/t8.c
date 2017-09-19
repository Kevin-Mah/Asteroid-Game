#include <stdio.h>

int main( void )
{
	int width = 0;
	int breadth = 0;
	int height = 0;
	scanf ("%d %d %d", &width, &breadth, &height);
	
	int x , y;
	for (x=0; x<breadth; x++)
	{
		printf("\n");
		for ( y = 0; y<width; y++)
		{
			if ( x == 0 || x == breadth-1 || y == 0 || y == width-1)
			{
				printf("#");
			}
			else
			{
				printf(".");
			}
		}
	}
}
		
	
			
