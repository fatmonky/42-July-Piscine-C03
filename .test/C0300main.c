/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0300main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:37:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 15:42:07 by pteh             ###   ########.fr       */
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
	
	int	a = ft_strcmp(string1, string1);
	int	b = ft_strcmp(string1, string2);
	int	c = ft_strcmp(string3, string5);
	int	d = ft_strcmp(string4, string1);
	
	int	f = strcmp(string1, string1);
	int	g = strcmp(string1, string2);
	int	h = strcmp(string3, string5);
	int	l = strcmp(string4, string1);
	
	printf("ft_strcmp ABC ABC:%d\n", a);
	printf("ft_strcmp ABC AB:%d\n", b);
	printf("ft_strcmp ABA ABZ:%d\n", c);
	printf("ft_strcmp ABJ ABC:%d\n", d);
	printf("strcmp:%d\n", f);
	printf("strcmp:%d\n", g);
	printf("strcmp:%d\n", h);
	printf("strcmp:%d\n", l);
}
