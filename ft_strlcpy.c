/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:56:05 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/29 18:35:14 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/* int main() */
/* { */
/*     char* strA = "Hakama"; */
/*     /1* char* strB = "reality"; *1/ */
/*     /1* char* buffer = (char *)malloc(sizeof(char) * 9); *1/ */
/*     int size = 9; */
/*     char    buffer[size]; */
/*     int ret_l = ft_strlcpy(buffer, strA, 4); */
/*     puts(buffer); */
/*     printf("ret_l = %d\n", ret_l); */
/* } */
