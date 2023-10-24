#include "lists.h" 
 #include <stdio.h> 
  
 /** 
  * print_listint - Prints all the elements of a listint_t list. 
  * @h: A pointer to the head of the list_t list. 
  * 
  * Return: The number of nodes in the list_t list. 
  */ 
 size_t print_listint(const listint_t *h) 
 {
	 size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}

