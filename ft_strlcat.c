/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:47:37 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;
	size_t	j;

	if (dst == 0 && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dl > dstsize)
		return (dstsize + sl);
	while (src[j] != '\0' && dl + j + 1 < dstsize)
	{
		dst[i + dl] = src[j];
		i++;
		j++;
	}
	dst[j + dl] = '\0';
	return (sl + dl);
}
