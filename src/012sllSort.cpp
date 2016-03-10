/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	
	struct node *temp = head;

	int count_zero = 0, count_one = 0, count_two = 0;

	while (temp != NULL)
	{
		if (temp->data == 0)
		{
			count_zero++;
		}
		if (temp->data == 1)
		{
			count_one++;
		}
		if (temp->data == 2)
		{
			count_two++;
		}
		temp = temp->next;
	}

	temp = head;

	while (count_zero!=0)
	{
		temp->data = 0;
		temp = temp->next;
		count_zero--;
	}

	while (count_one != 0)
	{
		temp->data = 1;
		temp = temp->next;
		count_one--;
	}
	while (count_two != 0)
	{
		temp->data = 2;
		temp = temp->next;
		count_two--;
	}

}