#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct listint_s - a linked list with only one link per node
 * @n: whole number
 * @next: indicates the subsequent node
 *
 * Description: the structure of a node in a singly linked list
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

void reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
