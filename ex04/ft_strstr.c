/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:51:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/07 14:17:02 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*find_substring(char *str, char *to_find)
{
	char	*found_subst = NULL; //non-initialized.

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
			if (*to_find != '\0')
				return (NULL);
			return (found_subst);
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
/*
It looks like your code contains a few issues that need to be addressed for it to compile and run correctly. Here are the changes you need to make:

1. The `find_substring` function needs to have a proper initialization for the `found_subst` pointer. Initialize it to `NULL` before the `while` loop.

2. When comparing characters in the `find_substring` function, you should use `*str` and `*to_find` before incrementing the pointers.

3. The `find_substring` function should return `found_subst` if the substring is found and `NULL` if not found.

Here's the corrected code:

```c
#include <string.h>
#include <stdio.h>

char *find_substring(char *str, char *to_find)
{
    char *found_subst = NULL; // Initialize to NULL

    while (*str)
    {
        if (*str == *to_find)
        {
            found_subst = str;
            while (*str == *to_find && *to_find != '\0') // Compare characters before incrementing pointers
            {
                str++;
                to_find++;
            }
            if (*to_find == '\0') // Check for end of substring
                return found_subst;
        }
        else
            str++;
    }
    return NULL; // Return NULL if substring is not found
}

char *ft_strstr(char *str, char *to_find)
{
    if (*to_find == '\0')
        return str;
    else
    {
        return find_substring(str, to_find);
    }
}

int main(void)
{
    char *a = "Hello World";
    char *b = "World";
    char *c = "Word";
    char *d = "";

    printf("ft_strstr(\"Hello World\", \"World\"): %s \n", ft_strstr(a, b));
    printf("ft_strstr(\"Hello World\", \"Word\"): %s \n", ft_strstr(a, c));
    printf("ft_strstr(\"Hello World\", \"\"): %s \n", ft_strstr(a, d));
    printf("strstr(\"Hello World\", \"World\"): %s \n", strstr(a, b));
    printf("strstr(\"Hello World\", \"Word\"): %s \n", strstr(a, c));
    printf("strstr(\"Hello World\", \"\"): %s \n", strstr(a, d));

    return 0; // Add return statement for main
}
```

These changes should help your code compile and produce the expected output.

*/
