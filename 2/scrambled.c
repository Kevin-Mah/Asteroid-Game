#include <stdio.h>

int scrambled( unsigned int a[], unsigned int b[], unsigned int len )
{
	int total_a = 0;
	int total_b = 0;
	for (unsigned int i=0; i<len; i++)
	{
		total_a = total_a + a[i];
		total_b = total_b + b[i];
	}
	if (total_a == total_b)
	{
		return 1;
	}
	else
	{	
		return 0;
	}
}
	
