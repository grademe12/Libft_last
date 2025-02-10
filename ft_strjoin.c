/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:30:18 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 15:27:31 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jp;
	char	*ret;	

	if (s1 == 0 || s2 == 0)
		return (0);
	jp = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (jp == NULL)
		return (NULL);
	ret = jp;
	while (*s1 != '\0')
	{
		*jp = *s1;
		s1++;
		jp++;
	}
	while (*s2 != '\0')
	{
		*jp = *s2;
		s2++;
		jp++;
	}
	*jp = '\0';
	return (ret);
}
