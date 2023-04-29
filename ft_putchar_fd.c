/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:44:30 by athawebo          #+#    #+#             */
/*   Updated: 2023/04/29 18:48:20 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/* int main() */
/* { */
/*     int fd; */

/*     fd = open("output.txt", O_WRONLY | O_CREAT, 0644); */
/*     ft_putchar_fd('a', fd); */
/*     close(fd); */
/*     /1* ft_putchar_fd('a', 1); *1/ */
/* } */
