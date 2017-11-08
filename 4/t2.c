#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void draw_rectangle( uint8_t array[], 
		          unsigned int cols, 
		          unsigned int rows, 
		          int x,
		          int y,
		          int rect_width,
		          int rect_height,
		          uint8_t color )
{

	if( rect_width == 0 || rect_height == 0)
	{
		exit(0);
	}
	// creates both horizontal portions
	if (rect_width > 0 )
	{
		for ( int i = 0; i < rect_width; i++)
		{
			array[(cols*y)+x+i] = color;
			array[(cols*(y+rect_height))+x+i] = color;
		}
	}
	else
	{
		for ( int j = 0; j > rect_width; j--)
		{
			array[(cols*y)+x+j] = color;
			array[(cols*(y+rect_height))+x+j] = color;
		}
	}

	//creates both vertical portions
	if (rect_height > 0)
	{
		for ( int k = 0; k < rect_height; k++)
		{
			array[(cols*(y+k))+x] = color;
			array[(cols*(y+k))+x+rect_width] = color;
		}
	}
	else
	{
		for ( int l = 0; l > rect_height; l--)
		{
			array[(cols*(y+l))+x] = color;
			array[(cols*(y+l))+x+rect_width] = color;
		}
	}
}
