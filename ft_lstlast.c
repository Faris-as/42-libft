#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{

    if (!lst)
        return (NULL);
    while(lst -> next != NULL)
    {
        lst = lst -> next;  
    }
    return (lst);
}

int main()
{
    t_list *a = ft_lstnew("faris");
    t_list *b = ft_lstnew("abdul");
    t_list *c = ft_lstnew("sukkur");
    ft_lstadd_front(&a, b);
    ft_lstadd_front(&a, c);
    printf("%s",(char *)a -> content);

    t_list *last = ft_lstlast(a);
    printf("%s",(char *)last -> content);
}