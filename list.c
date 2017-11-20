#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//global pointer
struct NODE *head;

//init the pointer to NULL
void newList()
{
    head = NULL;
}

//add a node to list
int addNode(int value)
{
    struct NODE *ptr = (struct NODE*)malloc(sizeof(struct NODE*));
    if(ptr == NULL)
        return 0;

    //init the ptr
    ptr->data = value;
    ptr->next = NULL;

    //if head is NULL, now ptr is head
    if(head == NULL)
        head = ptr;
    else
    {
        //else add this node to the list head
        ptr->next = head;
        head = ptr;
    }

    return 1;
}

//print
void prettyPrint()
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

