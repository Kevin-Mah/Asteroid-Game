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
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			float a = sqrt((j-x)^2+(i-y)^2);
			if(round(a) < r)
			{ 
				img[(cols*y)+x] = color;
			}
		}
	}
}


