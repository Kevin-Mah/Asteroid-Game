#include <stdio.h>

void reverse( int arr[], unsigned int len );
{
	int tmp = 0;
	for ( i=0; i<len/2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i] = tmp;
	}
}
