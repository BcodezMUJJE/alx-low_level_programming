#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return -1;  // Empty list or invalid head pointer

dlistint_t *current = *head;

if (index == 0) {
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return 1;
}
unsigned int count = 0;

while (current != NULL && count < index)
{
current = current->next;
count++;
}
if (current == NULL)
return -1;  // Index out of range

current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

free(current);

return 1;
}
