#include "lists.h" 
 #include <stdio.h> 
  
 /** 
  * listint_len - Returns the number of elements 
  *               in a linked listint_t list. 
  * @h: A pointer to the head of the listint_t list. 
  * 
  * Return: The number of elements in the listint_t list. 
  */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
 size_t listint_len(const listint_t *h) 
 { 
         size_t nodes = 0; 
  
         while (h) 
         { 
                 nodes++; 
                 h = h->next; 
         } 
  
         return (nodes); 
 }
