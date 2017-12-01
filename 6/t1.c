#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "intarr.h"


int intarr_save_binary( intarr_t* ia, const char* filename )
{
	if (ia == NULL)
	{
		return 1;
	}
	if ( filename == NULL)
	{
		return 1;
	}

	FILE* f = fopen("filename", "w");
	fwrite(ia->data, sizeof(int), ia->len, f);
	fclose( f );
	return 0;
}

intarr_t* intarr_load_binary( const char* filename )
{
	if ( filename == NULL || !filename)
	{
		return NULL;
	}

	FILE* f = fopen("filename", "r");
	if(!f)
	{
		return NULL;
	}

	fseek(f, 0 ,SEEK_END);
	int size = ftell(f)/sizeof(int);

	fseek(f, 0 , SEEK_SET);

	intarr_t* arr = malloc(sizeof(intarr_t));

	arr->len = size;
	arr->data = malloc(sizeof(int)*size);

	fread(arr->data, sizeof(int), size, f);

	fclose(f);
	return arr;
}
	
