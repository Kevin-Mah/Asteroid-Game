#include <stdio.h>

int main( void )
{
	int j;
	int i;	
	int s = 0;
	
	while (s != EOF)
	{
		s =  scanf( "%d", &i);
		if(s == EOF)
		{
			break;
		}
		for ( j = 0; j<i; j++)
		{
			printf("#");
		}
		if (i = ' ')
		{
			printf("\n");
		}
	}
return 0;
}
