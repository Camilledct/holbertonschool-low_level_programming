#include "lists.h"
#include <stdio.h>
/**
  * *get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
	return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
	{
	 return (head);
	}
	head = head->next;
	i++;
	}

	return (NULL);
}

