/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:14:22 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 15:14:32 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_wordcount(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (s[i] == 0 || (s[i] != c && i == 0))
		counter++;
	while (s[i] != 0)
	{
		i++;
		if (s[i] != c && s[i - 1] == c)
			counter++;
	}
	return (counter);
}
