/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:51:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/08 13:43:47 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>*/
#include <stddef.h>

char	*find_substring(char *str, char *to_find)
{
	char	*found_subst;

	found_subst = NULL;
	while (*str)
	{
		if (*str == *to_find)
		{
			found_subst = str;
			while ((*str == *to_find) && (*to_find != '\0'))
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (found_subst);
			else
				return (NULL);
		}
		else
			str++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	else
	{
		return (find_substring(str, to_find));
	}
}
/*
int	main(void)
{
	char *a = "Hello World";
	char *b = "World";
	char *c = "Word";
	char *d = "";

	printf("ft_strstr(\"Hello World\", \"World\": %s \n", ft_strstr(a, b));
	printf("ft_strstr(\"Hello World\", \"Word\": %s \n", ft_strstr(a, c));
	printf("ft_strstr(\"Hello World\", \"\": %s \n", ft_strstr(a, d));
	printf("strstr(\"Hello World\", \"World\": %s \n", strstr(a, b));
	printf("strstr(\"Hello World\", \"Word\": %s \n", strstr(a, c));
	printf("strstr(\"Hello World\", \"\": %s \n", strstr(a, d));

}
*/
