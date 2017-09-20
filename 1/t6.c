#include <stdio.h>

int main( void )
{
	float f = 0;
	float small = 0;
	float large = 0;
	float mean = 0;
	float total = 0;
	float i = 0;
	int s = 0;

	s = scanf( "%f", &f);
	small = f;
	large = f;
	total += f;
	i++;
	mean = total / i;

	while ( s != -1 )
	{
		s = scanf( "%f", &f);
		if ( s == -1 )
		{
			break;
		}
		if ( f <= small )
		{
			small = f;
		}
		if ( f >= large )
		{
			large = f;
		}
		total += f;
		i++;
		mean = total / i;
	} 
printf("%.2f %.2f %.2f\n", small, large, mean );
return 0;
}
