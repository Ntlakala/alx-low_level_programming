#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**

* add_node_end - adds a new node at the end of a linked list

* head: double pointer to the list_t list

* @str: string to put in the new node

* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_str;
list_t *tempo = head;
/* Initialize tempo with head to traverse the list */
unsigned int len = 0;

/* Find the length of the input string */
while (str[len])
len++;

/* Allocate memory for the new node */
new_str = malloc(sizeof(list_t));
if (!new_str)
return (NULL);

/* Copy the input string and assign the length to the new node */
new_str->str = strdup(str);
new_str->len = len;
new_str->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_str;
return (new_str);
}

/* Traverse the list until we reach the end */
while (tempo->next)
tempo = tempo->next;

/* Add the new node to the end of the list */
tempo->next = new_str;

return (new_str);
}
