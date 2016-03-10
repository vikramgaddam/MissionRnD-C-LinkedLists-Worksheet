/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {

	struct node *prev_temp;
	struct node *res_node = head;
	
	if (K == 1)
	{
		return NULL;
	}

	if (K <= 0)
	{
		return NULL;
	}

	int index = 1;
	prev_temp = head;

	while (head != NULL)
	{
		if (index%K == 0)
		{
			prev_temp->next = head->next;
			head = head->next;
			index++;
		}
		else
		{
			prev_temp = head;
			head = head->next;
			index++;
		}
	}

	return res_node;

}