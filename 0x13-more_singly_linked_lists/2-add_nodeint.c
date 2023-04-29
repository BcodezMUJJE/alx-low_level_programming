#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data ti insert in that node
 *
 * Return: pointer to the new node, or NULLL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
