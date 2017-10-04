#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	long int charcount = 0;
	long int linecount = 0;
	long int wordcount = 0;
	char c;
	int letter = false;

	while ( c != EOF )
	{
		char c = getchar();
		if ( c == EOF )
		{
			break;
		}
		charcount++;
		if ((c>='A' && c<='Z') ||(c>='a' && c<='z')|| c=='\'')
		{
			letter = false;
		}
		else 
		{
			if (letter == false)
			{
				wordcount++;
			}
			letter = true;
		}
		if (c == '\n')
		{
			linecount++;
		}
	}
printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
return 0;
}
