t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
 t_list *aux;
  
  if (f == 0 || del == 0)
    return 0;
  while (lst != 0)
  {
    aux =(t_list *) (f)(lst->content);
    (del)(lst->content);
    lst->content = aux;
    lst = lst->next;
  }
  return (lst);
  
  
}
