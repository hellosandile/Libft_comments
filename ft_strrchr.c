/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:34:34 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 10:29:26 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strchr() function locates the first occurrence of c (converted to a char)
 * in the string pointed to by s. The terminating null character is considered to
 * be part of the string; therefore if c is '\0', the functions locate the 
 * terminating '\0'. The strrchr function is identical to strchr(), except it locates
 * the last occurrence of c.
 *
 * In otherwords, the C library function char *strrchr(const char *str, int c) searches
 * for the last occurrence of the character c (an unsigned char) in the string pointed to,
 * by the argument str
 *
 * str - This is the C string
 * c - This is the character to be loacted. It is passed as its int promotion, but it is
 * internally converted back to char .
 *
 * RETURN VALUES: The functions strchr() and strrchr() return a pointer to the located
 * character, or NULL if the character does not appear in the string 
 *
 * #include <string.h> */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char*s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if(s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t i = 0;
	while(s[i])
			i++;
	return(i);
}

/*Use of string library function strrchr( ) headers are at the top

  THIS TEST WORKS!!!!


#include<stdio.h>
#include<string.h>

*/

int main()
{
   //initialize char pointer str
   const char *str = "Learn c from trytoprogram.com";

   int ch = 'c'; //character for searching in str

   printf("str = %s\n\n", str);
   printf("searching character ch = %c\n\n", ch);

   printf("Last occurrence of '%c' in str is = %s\n", ch, ft_strrchr( str, ch));

   return 0;
}
