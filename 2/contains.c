#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[2]);
	char phrase = strstr(argv[1], argv[2]); 

	if (phrase == NULL)
	{
		printf("false\n");
	}
	else
	{	
		printf("true\n");
	}
return 0;
}
	


