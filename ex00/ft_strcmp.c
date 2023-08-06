/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:41:54 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 14:31:34 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pointer_comp(char *string1, char *string2)
{


int	ft_strcmp(char *s1, char *s2)
{
	int	ascii_val;
	int	ascii_inc;

	ascii_val = 0;
	while (*s2 != '\0')
	{
		while (*s1 != '\0')
		{
		if (*s1 == *s2)
			ascii_inc = 0;
		else
			ascii_inc = *s1 - *s2;
		ascii_val = ascii_val + ascii_inc;
		s1++;
		}
		s2++;
	}
	return (ascii_val);
}
