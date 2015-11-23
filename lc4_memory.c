#include <stdio.h>
#include <stdlib.h>
#include "lc4_memory.h"

/*
 * adds a new node to the end of a linked list pointed to by head
 */
int add_to_list (row_of_memory** head,
		 short unsigned int address,
		 short unsigned int contents)
{

	/* allocate memory for a single node */

	/* populate fields in newly allocated node w/ address&contents */

	/* if head==NULL, node created is the new head of the list! */

	/* otherwise, traverse linked list until we reach the end */

	/* add node to the end of list */

	/* return 0 for success, -1 if malloc fails */

    row_of_memory* node = (row_of_memory*)malloc(sizeof(row_of_memory));
    if(!(node)) return -1;
    node->next = NULL;

    node->address = address;
    node->contents = contents;

    if(head == NULL || *head == NULL)
        *head = node;
    else{
        while( (*head) -> next != NULL) (*head) = (*head) -> next;
        (*head) -> next = node;
    }

	return 0 ;
}


/*
 * search linked list by address field, returns node if found
 */
row_of_memory* search_address (row_of_memory* head,
			       short unsigned int address )
{
	/* traverse linked list, searching each node for "address"  */

	/* return pointer to node in the list if item is found */

	/* return NULL if list is empty or if "address" isn't found */
    while(head != NULL)
    {
        if(head->address == address) return head;
        head = head->next;
    }
	return NULL ;
}

/*
 * search linked list by opcode field, returns node if found
 */
row_of_memory* search_opcode  (row_of_memory* head,
				      short unsigned int opcode  )
{
	/* traverse linked list until node is found with matching opcode
	   AND "assembly" field of node is empty */

	/* return pointer to node in the list of item is found */

	/* return NULL if list is empty or if no matching nodes */

	return NULL ;
}


void print_list (row_of_memory* head )
{
	/* make sure head isn't NULL */

	/* print out a header */

	/* traverse linked list, print contents of each node */
    if(head == NULL) return;
    printf("<address> \t <contents> \n");
    while( head != NULL)
    {
        printf("%-9d \t %-9d\n", head->address, head->contents);
        head = head -> next;
    }

	return ;
}

/*
 * delete entire linked list
 */
int delete_list    (row_of_memory** head )
{
	/* delete entire list node by node */
	/* if no errors, set head = NULL upon deletion */

	/* return 0 if no error, -1 for any errors that may arise */

    while((*head) != NULL)
    {
        row_of_memory *node = (*head)->next;
        free(*head);
        *head = node;
    }
	return 0 ;
}

int main (int argc, char** argv) {
	row_of_memory* memory = NULL ;
    add_to_list(&memory,1,2);
    add_to_list(&memory,3,4);
    print_list(memory);

    row_of_memory * found1 = search_address(memory, 1);
    printf("%d\n", found1 == NULL?-1:found1->address);

    row_of_memory * found2 = search_address(memory, 3);
    printf("%d\n", found2 == NULL?-1:found2->address);

    row_of_memory * found3 = search_address(memory, 5);
    printf("%d\n", found3 == NULL?-1:found3->address);

    delete_list(&memory);
    print_list(memory);



    return 0;
}
