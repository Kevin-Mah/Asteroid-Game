#include <stdio.h>

int main(void)
{
	long int charcount = 0;
	long int linecount = 0;
	long int wordcount = 0;
	char c;

	while ( c != EOF )
	{
		char c = getchar();
		if ( c == EOF )
		{
			break;
		}
		charcount++;
		wordcount++;
		if ((c>='A' && c<='Z') ||(c>='a' && c<='z')|| c=='\'')
		{
			wordcount--;
		}
		if (c == '\n')
		{
			linecount++;
		}
	}
printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
return 0;
}
