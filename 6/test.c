#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "intarr.h"


int main()
{
	intarr_t* ia = malloc(sizeof(intarr_t));
	ia->len = 3;
	ia->data = malloc(sizeof(int)*ia->len);
	ia->data[0] = 100;
	ia->data[1] = 200;
	ia->data[2] = 300;


	char filename[8] = "test.txt";

	intarr_save_json( ia, filename );

	intarr_t* arr = malloc(sizeof(intarr_t));

	arr = intarr_load_json( filename );
	printf("%d\n", arr->data[1]);
	return 0;
}
