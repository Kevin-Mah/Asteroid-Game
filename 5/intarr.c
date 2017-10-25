#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Structure type that encapsulates our safe int array. */
typedef struct {
  int* data;
  unsigned int len;
} intarr_t;

/* A type for returning status codes */
typedef enum {
  INTARR_OK,
  INTARR_BADARRAY,
  INTARR_BADINDEX,
  INTARR_BADALLOC,
  INTARR_NOTFOUND
} intarr_result_t;

/* LAB 5 TASK 1 */

// Create a new intarr_t with initial size len.  If successful
// (i.e. memory allocation succeeds), returns a pointer to a
// newly-allocated intarr_t.  If unsuccessful, returns a null pointer.
intarr_t* intarr_create( unsigned int len )
{
	intarr_t* arr = malloc(sizeof(intarr_t));
	if (arr == 0)
	{
		return NULL;
	}

	return arr;
}

// frees all memory allocated for ia. If the pointer is null, do
// nothing. If the ia->data is null, do not attempt to free it.
void intarr_destroy( intarr_t* ia )
{
	if( ia != NULL)
	{
		free(ia);
	}
}

/* LAB 5 TASK 2 */

// If index is valid, set the value at ia->data[index] to val and return
// INTARR_OK. Otherwise, leave the array unmodified and return
// INTARR_BADINDEX. If ia is null, return INTARR_BADARRAY.
intarr_result_t intarr_set( intarr_t* ia, 
			    unsigned int index, 
			    int val )
{
	if (ia == NULL)
	{
		return INTARR_BADARRAY;
	}

	if (index > 0)
	{
		ia->data[index] = val;
		return INTARR_OK;
	}
	else
	{
		return INTARR_BADINDEX;
	}
}
	

// If index is valid and i is non-null, set *i to ia->data[index] and return
// INTARR_OK. Otherwise no not modify *i and return
// INTARR_BADINDEX. If ia is null, return INTARR_BADARRAY.
intarr_result_t intarr_get( const intarr_t* ia, 
			    unsigned int index, 
			    int* i )
{
	if (ia == NULL)
	{
		return INTARR_BADARRAY;
	}
	
	if (index > 0 && i != NULL)
	{
		*i = ia->data[index];
		return INTARR_OK;
	}
	else
	{
		return INTARR_BADINDEX;
	}
}


