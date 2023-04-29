/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <athawebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:20:48 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/25 18:23:46 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int ft_lstsize(t_list *lst) */
/* { */
/*     int size; */
/*     t_list * tmp; */

/*     tmp = lst; */
/*     if (!lst) */
/*         return (0); */
/*     size = 1; */
/*     while (tmp->next) */
/*     { */
/*         tmp = tmp->next; */
/*         size++; */
/*     } */
/*     return (size); */
/* } */

// pass by ref
/* int ft_lstsize(t_list **lst) */

// pass by value
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// int main()
// {
//     t_list *    n1 = ft_lstnew("first");
//     t_list *    n2 = ft_lstnew("second");
//     t_list *    n3 = ft_lstnew("third");
//     t_list *    n4 = ft_lstnew("fouth");

//     ft_lstadd_front(&n4, n3);
//     ft_lstadd_front(&n3, n2);
//     ft_lstadd_front(&n2, n1);

//     printf("1 : %s\n", (char *)(n1->content));
//     printf("2 : %s\n", (char *)(n1->next->content));
//     printf("3 : %s\n", (char *)(n1->next->next->content));
//     printf("4 : %s\n", (char *)(n1->next->next->next->content));

//     printf("Size of this list = %d\n", ft_lstsize(n1));

//     return (0);
// }
