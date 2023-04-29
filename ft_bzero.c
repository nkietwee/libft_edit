/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:54:21 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/29 18:38:45 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n--)
		*p++ = 0;
}

// int main()
// {
//     /* int arr[10]; */
//     char   s[10] = "abcdefg";
//     /* char*   s = "abcdefg"; */
//     /* for (int i = 0; i < 10; i++) */
//     /* ft_bzero(s, sizeof(s)); */
//     ft_bzero(s, 7);
//     printf("%s\n", s);
//     /* for (int i = 0; i < ft_strlen(s); i++) */
//         /* printf("%d ", arr[i]); */
//     printf("\n");
//     return (0);
// }
