#include "lists.h"
/**
 * print_listint_safe - prints a linked
 * list, safely
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int num_of_nodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num_of_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num_of_nodes);
}

