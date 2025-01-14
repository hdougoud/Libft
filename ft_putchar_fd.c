/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:56:16 by hdougoud          #+#    #+#             */
/*   Updated: 2024/10/10 10:04:36 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int main(void)
//{
//	int i = 0;
//	char s[] = "Hello Wolrd";
//	while (s[i])
//	{
//		ft_putchar_fd(s[i], 1);
//		i++;
//	}
//}