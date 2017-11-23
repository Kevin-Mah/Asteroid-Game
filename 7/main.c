#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main( int argc, char* argv[] )
{
  // test the create function
  list_t* list = list_create();

  // check to see if the create function did everything it was supposed to
  if( list == NULL )
    {
      printf( "create: create failed to malloc\n" );
      return 1;
    }

  if( list->head != NULL )
    {
      printf( "create: head is not null!\n" );
      return 1;
    }

  if( list->tail != NULL )
    {
      printf( "create: tail is not null!\n" );
      return 1;
    }

  // now test all the other functions (except list_print) to see if
  // they do what they are supposed to

  // you code goes here

	element_t* a = element_create( 10 );// test element create t2
	
	if(a->next != NULL)
	{
		printf("element  create bugged\n");
		return 1;
	}

	list_t* test4 = list_create();//test prepend empty list t4
	list_prepend(test4, 20);

	if(test4->tail->val != 20);
	{
		printf( "prepend bugged\n");
		return 1;
	}

	list_t* test1 = list_create(); // testing list index t1 empty llst
	element_t* b = list_index(test1, 1);

	if (b != NULL)
	{
		printf( "empty list index bugged\n");
		return 1;
	/

	list_t* test3 = list_create(); // testing list index t3 zero index
	for(int i; i<10; i++)
	{
		list_append(test3, i);
	}

	element_t* c = list_index(test3, 0);
	if(c->val !=0)
	{
		printf( "index zero missed bugged\n");
		return 1;
	}

	//t5 testing for I thats larger than list
 	element_t* d = list_index(test3, 11);
	if(d != NULL)
	{
		printf( "large i bugged\n");
		return 1;
	}
  return 0; // tests pass
}
