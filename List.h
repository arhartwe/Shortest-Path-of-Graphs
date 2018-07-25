/*
 * Name		: Andrew Hartwell
 * CruzID	: arhartwe
 * Assignment	: pa4
*/

//--------------------------------------------------------------
// List.h
// Header file for Doubly Linked List ADT
//--------------------------------------------------------------

#ifndef _LIST_H_INCLUDE
#define _LIST_H_INCLUDE

// Exported type -----------------------------------------------
typedef struct ListObj* List;
typedef struct NodeObj* Node;

// Constructors-Destructors ------------------------------------
List newList(void);
void freeList(List* pL);
Node newNode(int data);
void freeNode();

// Access functions --------------------------------------------
int isEmpty(List L);
int length(List L);
int index(List L);
int front(List L);
int back(List L);
int get(List L);
int equals(List A, List B);

// Manipulation procedures -------------------------------------

void clear(List L);
void moveFront(List L);
void moveBack(List L);
void movePrev(List L);
void moveNext(List L);
void prepend(List L, int data);
void append(List L, int data);
void insertBefore(List L, int data);
void insertAfter(List L, int data);
void deleteFront(List L);
void deleteBack(List L);
void delete(List L);

// Other operations -------------------------------------------
void printList(FILE* out, List L);
List copyList(List L);

#endif
