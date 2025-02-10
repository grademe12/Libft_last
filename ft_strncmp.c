/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woospark <woospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:01:08 by woosupar          #+#    #+#             */
/*   Updated: 2025/02/10 18:52:21 by woospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	unsigned int		j;
	unsigned char		*s3;
	unsigned char		*s4;

	i = 0;
	j = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s3[i] && s4[j] && i < n)
	{
		if (s3[i] != s4[j])
			break ;
		else if (s3[i] == s4[j])
		{
			i++;
			j++;
		}
		if (i == n)
			return (0);
	}
	return (s3[i] - s4[j]);
}
