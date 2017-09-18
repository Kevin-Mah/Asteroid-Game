#include <stdio.h>
#include <math.h>

int main( void )
{
	float f = 0;

	scanf( "%f", &f);

	int a = floor(f);
	int b = round(f);
	int c = ceil(f);

	printf("%d %d %d\n", a, b, c );

	return 0;
}
