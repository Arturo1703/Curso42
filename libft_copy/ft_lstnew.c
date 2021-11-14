#include "libft.h"

t_list *ft_lstnew(void *content)
{
   t_list *a;
  
  a = (* t_list) malloc( sizeof(*a));
  if (a == 0)
      return (0);
  a->content = content;
  a->next = 0;
  return (a);
}
