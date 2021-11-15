void ft_lstdelone(t_list *lst, void (*del)(void*))
{
  if (del == 0)
    return ;
  if (lst != 0)
  {
    (del)(lst->content);
    free(lst);
  }
}  
