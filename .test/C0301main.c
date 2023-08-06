/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0301main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:37:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 15:43:58 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;
	char	*string5;
	unsigned int	i;
	unsigned int	j;

	string1 = "ABC";
	string2 = "AB";
	string3 = "ABA";
	string4 = "ABJ";
	string5 = "ABZ";
	i = 3;
	j = 3;

	printf("original:%s\n", string1);
	printf("original:%s\n", string2);
	printf("original:%s\n", string3);
	printf("original:%s\n", string4);
	printf("original:%s\n", string5);
	
	int	a = ft_strncmp(string1, string1,i);
	int	b = ft_strncmp(string1, string2,i);
	int	c = ft_strncmp(string3, string5,j);
	int	d = ft_strncmp(string4, string1,i);
	
	int	f = strncmp(string1, string1,i);
	int	g = strncmp(string1, string2,i);
	int	h = strncmp(string3, string5,j);
	int	l = strncmp(string4, string1,i);
	
	printf("ft_strncmp ABC ABC:%d\n", a);
	printf("ft_strncmp ABC AB:%d\n", b);
	printf("ft_strncmp ABA ABZ:%d\n", c);
	printf("ft_strncmp ABJ ABC:%d\n", d);
	printf("strncmp:%d\n", f);
	printf("strncmp:%d\n", g);
	printf("strncmp:%d\n", h);
	printf("strncmp:%d\n", l);
}
