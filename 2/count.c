#include <stdio.h>

int main(void)
{
	int charcount = 0;
	int linecount = 0;
	int wordcount = 0;
	char c;

	while ( c != EOF )
	{
		char c = getchar();
		if ( c == EOF )
		{
			break;
		}
		if ((c>='A' && c<='Z') ||(c>='a' && c<='z')|| c=='\'')
		{
			charcount++;
		}
		else
		{
			wordcount++;
		}
		if (c == '\n')
		{
			linecount++;
		}
	}
printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
return 0;
}
