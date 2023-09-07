/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:53:33 by truello           #+#    #+#             */
/*   Updated: 2023/08/28 11:21:49 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	get_max_len(char *s1, char *s2)
{
	long	max;
	long	size_s2;

	max = sizeof(s1);
	size_s2 = sizeof(s2);
	if (size_s2 > max)
		max = size_s2;
	return (max);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < get_max_len(s1, s2))
	{
		if (*s1 > *s2)
		{
			r = *s1 - *s2;
			break ;
		}
		else if (*s1 < *s2)
		{
			r = *s1 - *s2;
			break ;
		}
		i++;
		s1++;
		s2++;
	}
	return (r);
}
