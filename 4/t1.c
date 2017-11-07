#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void draw_circle( uint8_t img[], 
                  unsigned int cols,
                  unsigned int rows,
		  int x,
		  int y,
		  int r,
		  uint8_t color )
{
	if (r == 0)
	{
		exit(0);
	}

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			float a = sqrt((x-j)^2+(y-y)^2);
			if(round(a) < r)
			{ 
				img[(cols*i)+j] = color;
			}
		}
	}
}


