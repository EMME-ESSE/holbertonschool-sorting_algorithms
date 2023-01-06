#include "sort.h"

/**
 * swap_nodes - function that swap two nodes
 * @node1: the first node to swap;
 * @node2: the other node to swap;
 **/
void swap_nodes(listint_t *node1, listint_t *node2)
{
	int temp;

	temp = node1->n;
	node1->n = node2->n;
	node2->n = temp;
}
/**
 * listint_len - function that returns the number of elements in a linkedlist
 * @h: const dlistint_t;
 * Return: the number of elements;
 **/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: the list of integers;
 **/

void insertion_sort_list(listint_t **list)
{
	int len, stat = 0, ch = 0, i;
	listint_t *node = NULL, *aux;

	len = listint_len(*list);

	if (len < 2)
		return;

	while (stat != 1)
	{
		node = *list;

		for (i = 0; node; i++)
		{
			ch = 0;
			if (node->n > node->next->n)
			{
				swap_nodes(node, node->next);
				aux = node->prev;
				ch++;
				print_list(*list);
				while (1)
				{
					if (!aux->prev || aux->n > aux->prev->n)
						break;

					swap_nodes(aux->prev, aux);
					aux = aux->prev;
					ch++;
					print_list(*list);
				}
			}
			else
				node = node->next;
		}
		if (ch == 0)
			stat = 1;
	}
}
