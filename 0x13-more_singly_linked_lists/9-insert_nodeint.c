#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idk: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_));
if (!new || !head)
	return (NULL);
new->n = n;
new->next = NULL;

if (i = 0 ; temp && i ; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
*head = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
