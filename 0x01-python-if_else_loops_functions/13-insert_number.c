#include "lists.h"

/**
 * insert_node - Inserts a numeric value into a singly-linked list that is already sorted.
 * @head: A pointer to the beginning of the linked list.
 * @number: The numeric value to be inserted.
 * Author - Chidera Ikpeama
 * Return: If the function fails - NULL.
 *         Otherwise - its a pointer to the newly created node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
