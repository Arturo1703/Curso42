void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list *aux;
  t_list *next;
  
  if (lst == 0)
    return ;
  aux = *lst;
  while (aux != 0)
  {
    next = aux->next;
    ft_lstdelone(aux, del);
    aux = next;
  }
  *lst = 0;
}
