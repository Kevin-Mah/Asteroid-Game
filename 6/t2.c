#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "intarr.h"

int intarr_save_json( intarr_t* ia, const char* filename )
{
	if( ia == NULL)
	{
		return 1;
	}
	if( filename == NULL)
	{
		return 1;
	}

	FILE* f = fopen(filename, "w");

	fprintf( f , "[");

	for(int i = 0; i<ia->len; i++)
	{
		if(i == 0)
		{
		fprintf( f , " %d", ia->data[i]);
		}
		else
		{
		fprintf( f , ", %d", ia->data[i]);
		}
	}
	
	fprintf( f , " ]");
	fclose(f);
	return 0;
}

intarr_t* intarr_load_json( const char* filename )
{
	if ( filename == NULL)
	{
		return NULL;
	}

	FILE* f = fopen(filename, "r");

	if(f == NULL)
	{
		return NULL;
	}
	
	//finding number of commas
	int number = 0;
	while( !feof )
	{
		char comma = getc(f);
		if( comma == ',' )
		{
			number++;
		}
	}

	fseek(f, 0 , SEEK_SET);
	
	intarr_t* arr = malloc(sizeof(intarr_t));

	arr->len = number+1;//numbers in array = number of commas plus 1
	arr->data = malloc(sizeof(int)*arr->len);

	int j = 0;

	for (int i = 0; i<arr->len; i++)
	{
		while(fscanf( f, "%d", &j) != 1)
		{
			fseek( f , 1 , SEEK_CUR);//skip commas
		}
		
		arr->data[i] = j;
	}
	fclose(f);
	return arr;
}
