#include <stdio.h>
#include <math.h>

int main( void )
{
	int width = 0;
	int breadth = 0;
	int height = 0;
	scanf ("%d %d %d", &width, &breadth, &height);

	int x , y;
	for (x=0; x<height; x++)
	{
		for ( y = 0; y<width; y++)
		{
			int j = height-1-x;
			int left = floor( j * (width/(2.0*height)) );
			int right = ceil( (width-1) + -j * (width/(2.0*height)) ); 
			
			if ( x == height-1 || y == left || y == right)
			{
				printf("#");
			}
			else if ( y> left -1 && y <= right-1 && x == 0)
			{
				printf("#");
			}
				
			else if ( y> left -1 && y <= right-1)
			{
				printf(".");
			}
			else
			{
				printf(" ");
			}			
		}
		printf("\n");
	}
}

