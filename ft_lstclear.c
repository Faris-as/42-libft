#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

    if (!lst || !*lst || !del)
        return;
    t_list *current;
    t_list *next;

    current = *lst;
    while (current)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL;

}
