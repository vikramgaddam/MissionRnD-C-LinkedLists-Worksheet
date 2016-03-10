/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {

	int temp;

	int rev_num=0;

	if (N == 0)
	{
		struct node *dum = (struct node*)malloc(sizeof(struct node));
		dum->num = 0;
		dum->next = NULL;
		return dum;
	}

	if (N < 0)
	{
		N = N*(-1);
	}

	while (N > 0)
	{
		temp = N % 10;

		rev_num = rev_num * 10 + temp;

		N = N / 10;

	}

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->num = rev_num % 10;
	rev_num = rev_num / 10;
	head->next = NULL;
	struct node *curr_node = head;
	while (rev_num > 0)
	{
		temp = rev_num % 10;
		struct node *temp_node = (struct node*)malloc(sizeof(struct node));
		temp_node->num = temp;
		temp_node->next = NULL;
		curr_node->next = temp_node;
		curr_node = curr_node->next;
		rev_num = rev_num / 10;
	}
	return head;
}