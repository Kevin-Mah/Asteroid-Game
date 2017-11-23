#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void list_catenate(list_t* list1, list_t* list2)
{
	if(list1->head == NULL)
	{
		*list1 = *list2;
	}
	else
	{
		list1->tail->next = list2->head;
		list1->tail = list2->tail;
	}
	free(list2);
}
 

void list_sort( list_t* list )
{
	//base
	if(list->head == list->tail)
	{
		return;
	}

	//make pivot and move head
	int pivot = list->head->val;
	element_t* p_node = list->head;
	list->head = list->head->next;

	//partition
	list_t* first = list_create();
	list_t* second = list_create();
	element_t* current = list->head;
	element_t* next;
	while( current != NULL)
	{
		next = current->next;
		current->next = NULL;
		if( current->val <= pivot)
		{
			list_append(first, current->val);
		}
		else
		{
			list_append(second, current->val);
		}
		current = next;
	}

	list->head = NULL;
	list->tail = NULL;

	list_sort(first);
	list_sort(second);

	//join together
	list_catenate(list, first);
	list_append(list, p_node->val);
	list_catenate(list, second);
}


	
    	

