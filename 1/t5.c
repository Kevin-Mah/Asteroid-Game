#include <stdio.h>
#include <math.h>

int main( void )
{
	float f = 0;

	while ( f != EOF )
	{	
		int s = 0;

		s = scanf( "%f", &f);

		int a = floor(f);
		int b = round(f);
		int c = ceil(f);

		printf("%d %d %d\n", a, b, c );
	
		if ( s == -1 )
		{
			printf("Done.\n");
		}	
	}
	
}
