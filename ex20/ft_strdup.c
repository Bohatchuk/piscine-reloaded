/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:29:50 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/27 19:54:42 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*res;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		res[len] = src[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
