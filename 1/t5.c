#include <stdio.h>
#include <math.h>

int main( void )
{
	float f = 0;
	int s = 0;
	s = scanf( "%f", &f);
	int a = floor(f);
	int b = round(f);
	int c = ceil(f);
	
	if ( s == -1)
	{
		printf("Done.\n");	
	}
	else
	{
		printf("%d %d %d\n", a, b, c );
		main ();		
	}
}
