/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:46:24 by pteh              #+#    #+#             */
/*   Updated: 2023/08/07 14:19:06 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	char	*originaldest;

	originaldest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	if (*dest == '\0')
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
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

	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 
	printf("ft_strcat( string1, string2)): %s\n",ft_strcat(string1,string2)); 
	printf("strcat(string1, string2): %s\n",strcat(string1, string2));
	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 

}*/
