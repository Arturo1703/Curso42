#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  t_list *aux:
  aux = lst;
  if (aux = 0)
    return (0);
  while (aux->next != 0)
    aux = aux->next;
  return (aux);
} 
