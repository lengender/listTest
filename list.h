#ifndef _LIST_H_
#define _LIST_H_

//define structure
struct NODE{
    int data;
    struct NODE *next;
}NODE;

//function declaration
void newList();
int addNode(int value);
void prettyPrint();

#endif
