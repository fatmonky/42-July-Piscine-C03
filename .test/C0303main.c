/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0303main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:38:45 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 16:40:01 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	string1[20] = "Hello, "; 
	char	string2[20] = "World";
	unsigned int	i;

	i = 3;

	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 
	printf("ft_strncat( string1, string2,3)): %s\n",ft_strncat(string1,string2, i)); 
	printf("strncat(string1, string2,3): %s\n",strncat(string1, string2, i));
	printf("original string1: %s\n",string1); 
	printf("original string2: %s\n",string2); 
}

