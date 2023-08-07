/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:19:41 by pteh              #+#    #+#             */
/*   Updated: 2023/08/06 10:42:01 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ( i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else 
	{
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
}
/*
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
*/

/*
 
The code you provided has a few issues that need to be addressed in order to correctly reproduce the behavior of the `strncmp` function from the C standard library. Here's what's wrong with the code and how it can be refactored:

1. The loop should start with `i = 0`, not `i = 1`, since you want to compare characters from the beginning of the strings.
2. The loop condition should check `i < n` before checking the characters. Otherwise, you might access memory beyond the provided strings' length.
3. The loop condition should also check for the null-terminator (`'\0'`) after comparing characters.
4. The return value should be based on the comparison result, rather than the subtraction of characters. You should return the difference of the characters' ASCII values.

Here's the corrected and refactored code:

```c
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (i == n)
    {
        return 0;  // Both strings are equal up to n characters
    }
    else
    {
        return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
}
```

Key changes made:

1. Initialize `i` to 0.
2. Check `i < n` before comparing characters and checking for null-terminators.
3. Return 0 if the loop completes and strings are equal up to n characters.
4. Cast characters to `unsigned char` before subtraction to correctly handle signedness and prevent integer underflow.

This refactored code should now correctly reproduce the behavior of the `strncmp` function. 
  
 */
