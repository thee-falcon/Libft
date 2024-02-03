/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:41:38 by omakran           #+#    #+#             */
/*   Updated: 2022/10/08 12:45:57 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == 0 && str2[i] == 0)
			return (0);
		else if (str1[i] == 0 && str2[i] != 0)
			return (-1);
		else if (str1[i] - str2[i] < 0)
			return (-1);
		else if (str1[i] - str2[i] > 0)
			return (1);
		i++;
	}
	return (0);
}
