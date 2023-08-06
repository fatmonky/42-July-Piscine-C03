/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:07:49 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 16:46:03 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*originaldest;
	unsigned int	count;

	originaldest = dest;
	count = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	if (*dest == '\0')
	{
		while (*src != '\0' && count < nb)
		{
			*dest = *src;
			src++;
			dest++;
			count++;
		}
		*dest = '\0';
	}
	return (originaldest);
}
/*
int	main(void)
{
	char	string1[20] = "Hello, "; 
	char	string2[20] = "World";
	unsigned int	i;

	i = 3;
	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 
	printf("ft_strncat( string1, string2,3)): %s\n",
	ft_strncat(string1,string2, i)); 
	printf("strncat(string1, string2,3): %s\n",strncat(string1, string2, i));
	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 
}*/
