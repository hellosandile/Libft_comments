/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:56:47 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/12 13:42:58 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strncmp() function lexicographically compare the null-terminated strings
 * s1 and s2.
 *
 * The strncmp() function compares not more than n characters. Because strncmp()
 * is designed for comparing strings rather than binary data, characters that appear
 * after a '\0' character are not compared.
 *
 * s1 - This is the first string to be compared
 * s2 - This is the second string to be compared
 * n - The maxium number of characters to be compared
 *
 * RETURNED VALUES: The strncmp() functions return an integer greater than, equal
 * to, or less than 0, according as the string s1 is greater than, equal to, or
 * less than the string s2. The comparison is done using unsigned characters,
 * so that '\200' is greater than '\0'.  */

/*  */



int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t = i;

	i = 0;

	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


/* Check the else if statements and change the print
 * function

#include <sdtio.h>
#include <string.h>

int	main()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strncmp(str1, str2, 4);

	if(ret < 0)
	{
      printf("str1 is less than str2");
	} 
	else if(ret > 0)
   {
      printf("str2 is less than str1");
   } 
	else
   {
      printf("str1 is equal to str2");
   }
}

*/

#include <string.h>
#include <stdio.h>

/*
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		result;
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
*/

/* Found online and figure pay attention to the main *

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
    int result;

    // comparing strings str1 and str2
    result = ft_strncmp("asdf", "asdf", 4);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = ft_strncmp("asde", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asdg", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asdf", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asde", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}

*/
