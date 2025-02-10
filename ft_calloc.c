/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:31 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	unsigned char	*cp;
	size_t			num;

	if (count == 0 || size == 0)
		return ((void *)malloc(0));
	if (count > SIZE_MAX / size)
		return (0);
	num = count * size;
	p = (void *) malloc(num);
	if (p == 0)
		return (0);
	cp = (unsigned char *)p;
	while (num > 0)
	{
		*cp = 0;
		num--;
		cp++;
	}
	return (p);
}
