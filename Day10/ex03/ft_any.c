/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:04:56 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/27 15:55:17 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
