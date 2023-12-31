/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:20:29 by pteh              #+#    #+#             */
/*   Updated: 2023/08/12 17:43:42 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	total_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	total_len = dest_len + ft_strlen(src);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	else
	{
		while ((i < (size - 1)) && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char a[20] = "Hello";
	char *b = "Wor";
	char *d = "Worldly";
	unsigned int c = 110;
	unsigned int e = 3;

	printf("pre trans a: %s\n", a);
	printf("str(\"Hello\", \"Wor\", 110): %d \n", ft_strlcat(a, b, c));
	printf(" a: %s\n", a);
	printf("str(\"Hello\", \"Worldly\", 110): %d \n", ft_strlcat(a, d, c));
	printf(" a: %s\n", a);
	printf("str(\"Hello\", \"Wor\", 3): %d \n", ft_strlcat(a, b, e));
	return(0);
}*/
