/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:26:27 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/30 13:48:04 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strstr() function searches the given string in the specified main string
 * and returns the pointer to the first occurrence of the given string 
 *
 * strstr(const char *haystack, const char *needle)
 *
 * The strstr() function locates the first occurrence of the null-terminated
 * string needle in the null-terminated string haystack.
 *
 * RETURN VALUES: If needle is an empty string, haystack is returned; if needle
 * occurs noweher in haystack, NULL is returned; otherwise a pointer to the first
 * character fo the first occurrence of needle is returned.
 *
 * */

char		*ft_strstr(const char *s1, const char *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if(s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0' && s1[i + j] == s2[j])
		j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
			i++;
	}
	return (0);
}

/* The function works however the output has a % sign which I don't want.
 * Also check other ways to do this function  */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main () {
   const char str[20] = "Hello, how are you?";
   const char searchString[10] = "you";
   char *result;

   /* This function returns the pointer of the first occurrence
    * of the given string (i.e. searchString)
    */
   result = ft_strstr(str, searchString);
   printf("The substring starting from the given string: %s\n?", result);
   return 0;
}
