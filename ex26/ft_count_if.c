/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 17:50:44 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/29 19:02:07 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}