/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirakos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:28:54 by skirakos          #+#    #+#             */
/*   Updated: 2024/01/11 19:28:55 by skirakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int		n;
	int		i;

	i = 0;
	n = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
