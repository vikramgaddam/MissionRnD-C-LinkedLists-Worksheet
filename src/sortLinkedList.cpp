/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)return NULL;

	struct node *pointer1 = head;
	struct node *pointer2 = head;

	while (pointer1 != NULL)
	{
		pointer2 = pointer1->next;
		int temp_num = pointer1->num;

		while (pointer2 != NULL)
		{
			if (pointer2->num < temp_num)
			{
				int dum = pointer2->num;
				pointer2->num = temp_num;
				temp_num = dum;
			}
			pointer2 = pointer2->next;
		}
		pointer1->num = temp_num;
		pointer1 = pointer1->next;
	}
	return head;
	
}