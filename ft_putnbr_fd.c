/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:46:52 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[11];
	int		i;

	i = 0;
	if (n == 0)
		write (fd, "0", 1);
	if (n < 0)
		write (fd, "-", 1);
	while (n != 0)
	{
		if (n < 0)
			nbr[i] = (-1 * (n % 10)) + '0';
		else
			nbr[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	nbr[i] = '\0';
	i--;
	while (i > -1)
	{
		write (fd, &nbr[i], 1);
		i--;
	}
}
