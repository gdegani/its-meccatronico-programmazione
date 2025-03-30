#ifndef EXAMPLE24_SIMPLE_LIST_H
#define EXAMPLE24_SIMPLE_LIST_H

/**
 * Add an element to the HEAD of the list
 * @param v value to add
 * @return 0 if successful, 1 in case of errors
 */
int AddToHead(int);

/**
 * Remove an item from the list's head
 * @param v pointer to return the removed item
 * @return  0 if successful, 1 in case of errors
 */
int AddToTail(int);

/**
 * Add an item to the end of the list
 * @param v value to be inserted in the new list item
 * @return   0 if successful, 1 in case of errors
 */
int RemoveFromHead(int *);

/**
 *  remove the last item
 * @param v pointer to return a copy of the item's value
 * @return  0 if successful, 1 in case of errors
 */
int RemoveFromTail(int *);

/**
 * remove all the element deallocating their memory
 */
void ClearAll(void);

/**
 * Scroll the list printing all the elements
 */
void printAll();

#define LIST_OK 0
#define LIST_ERROR 1


#endif //EXAMPLE24_SIMPLE_LIST_H
