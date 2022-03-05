#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (list)
	{
		list->content = content;
		list->next = NULL;
	}
	return (list);
}
