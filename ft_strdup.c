/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokartou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 11:54:17 by yokartou          #+#    #+#             */
/*   Updated: 2017/04/20 11:47:49 by yokartou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char		*dest;
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(s) + 1;
	if (!(dest = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	ft_strcpy(dest, s);
	return (dest);
}
