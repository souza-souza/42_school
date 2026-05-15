#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    
    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);

    new->content = content;
    new->next = NULL;
    return(new);
}
int main()
{
    t_list *new;

    new = ft_lstnew("Alo gente");
    printf("O conteúdo do nó é: %s", (char *)new->content);
    return (0);
}