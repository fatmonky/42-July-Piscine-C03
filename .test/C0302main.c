/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0302main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:06:21 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 16:06:47 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

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

}
