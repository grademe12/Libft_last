/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:54:41 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nl;

	i = 0;
	j = 0;
	nl = ft_strlen(needle);
	if (len == 0 && haystack == 0)
		return (0);
	while (*haystack >= 0 && i + nl <= len)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
				j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		else
		{
			i++;
			j = 0;
		}
		if (i > ft_strlen(haystack))
			return (0);
	}
	return (0);
}
