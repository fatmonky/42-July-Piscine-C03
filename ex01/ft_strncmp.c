/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:19:41 by pteh              #+#    #+#             */
/*   Updated: 2023/08/08 10:10:16 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
/*
   int	main(void)
   {
   char	*string1;
   char	*string2;
   char	*string3;
   char	*string5;
   unsigned int	i;
   unsigned int	j;

   string1 = "ABCD";
   string2 = "AB";
   string3 = "ABAA";
   string5 = "ABZa";
   i = 4;
   j = 2;

   printf("original:%s\n", string1);
   printf("original:%s\n", string2);
   printf("original:%s\n", string3);
   printf("original:%s\n", string5);

   int	a = ft_strncmp(string1, string1,i);
   int	b = ft_strncmp(string1, string2,i);
   int	c = ft_strncmp(string3, string5,j);
   int	d = ft_strncmp(string3, string5,i);

   int	f = strncmp(string1, string1,i);
   int	g = strncmp(string1, string2,i);
   int	h = strncmp(string3, string5,j);
   int	l = strncmp(string3, string5,i);

   printf("ft_strncmp ABCD ABCD, 4:%d\n", a);
   printf("ft_strncmp ABCD AB, 4:%d\n", b);
   printf("ft_strncmp ABAA ABZa, 2:%d\n", c);
   printf("ft_strncmp ABAA ABZa, 4:%d\n", d);
   printf("strncmp:%d\n", f);
   printf("strncmp:%d\n", g);
   printf("strncmp:%d\n", h);
   printf("strncmp:%d\n", l);
   }
   */
