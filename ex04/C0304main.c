/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0304main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:38:45 by pteh              #+#    #+#             */
/*   Updated: 2023/08/07 14:00:48 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
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

