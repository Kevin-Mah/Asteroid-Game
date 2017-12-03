#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "point_array.h"



//initialize array struct
void point_array_init( point_array_t* pa )
{
	pa->len = 0;
	pa->reserved = 0;
	pa->points = malloc(sizeof(point_t));
}

//reset the array to empty
void point_array_reset( point_array_t* pa )
{
	pa->len = 0;
	pa->points[0].x = 0;
	pa->points[0].y = 0;
	pa->points[0].z = 0;
	pa->reserved = 0;
	pa->points = malloc(sizeof(point_t));
}

// Append a point to the end of an array. If successful, return 0,
// else return 1;
int point_array_append( point_array_t* pa, point_t* p )
{
	if(pa->points == NULL || p == NULL)
	{
		return 1;
	}
	
	if (pa->len == 0)
	{
		pa->len = pa->len+1;
		pa->reserved = 2;
		pa->points = realloc(pa->points, sizeof(point_t)*pa->reserved);
		pa->points[pa->len-1].x = p->x;
		pa->points[pa->len-1].y = p->y;
		pa->points[pa->len-1].z = p->z;
	}
	else
	{
		pa->points[pa->len-1].x = p->x;
		pa->points[pa->len-1].y = p->y;
		pa->points[pa->len-1].z = p->z;
		pa->len = pa->len+1;
	}

	if(pa->reserved == pa->len)
	{
		pa->reserved = pa->reserved*2;
		pa->points = realloc(pa->points, sizeof(point_t)*pa->reserved);
	}
	return 0;
}


// Remove the point at index i from the array, reducing the size of
// the array by one. The order of points in the array may change.
int point_array_remove( point_array_t* pa, unsigned int i )
{
	if(i >= pa->len || pa->len == 0 )
	{
		return 1;
	}
	
	pa->len = pa->len-1;
	pa->points[i].x = pa->points[pa->len].x;
	pa->points[i].y = pa->points[pa->len].y;
	pa->points[i].z = pa->points[pa->len].z;
	//since we have reserved space no need to reallocate just change array end to 0
	pa->points[pa->len].x = 0;
	pa->points[pa->len].y = 0;
	pa->points[pa->len].z = 0;
	return 0;
}
