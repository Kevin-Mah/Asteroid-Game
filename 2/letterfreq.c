#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char arr[1000000] = {0};
	int letter,i;
	int count = 0;
	int len = 0;
	int c;
	float num[26];	
	
	for (i=0; i<26; i++)
	{
		num[i] =0;
	}
	while (c != EOF)
	{
		c = scanf("%c", arr);
		
		for (i =0; i<=len; i++)
		{	
			if (arr[i]>='a' && arr[i]<='z')
			{
				num[arr[i]-97]++;
				count++;
			}
			if (arr[i]>='A' && arr[i]<='Z')
			{
				num[arr[i]-65]++;
				count++;
			}
		
		}
		len++;
	}
	if ( c == EOF )
	{		
		for( i=0; i<26;i++)
		{
			letter = i +97;
			if (num[i] !=0)
			{
				float freq= num[i]/count;
				printf( "%c %.4f\n", letter, freq);
			}
		}
	}
return 0;
}
		
