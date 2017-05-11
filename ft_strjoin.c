/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokartou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:54:36 by yokartou          #+#    #+#             */
/*   Updated: 2017/04/23 12:36:20 by yokartou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			lens1;
	size_t			lens2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char*) * (lens1 + lens2 + 1))))
		return (NULL);
	str[0] = '\0';
	str = ft_strcat(str, s1);
	str = ft_strncat(str, s2, lens2);
	return (str);
}
