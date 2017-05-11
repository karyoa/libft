/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokartou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:21:08 by yokartou          #+#    #+#             */
/*   Updated: 2017/04/21 18:14:36 by yokartou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			tmp;
	size_t			i;

	i = 0;
	tmp = start;
	if (s == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] || start <= len)
	{
		if (s[start] == '\0')
			break ;
		str[i] = s[start];
		i++;
		start++;
	}
	str[len] = '\0';
	return (str);
}
