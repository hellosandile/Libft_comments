/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:04:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/12 11:34:52 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strdup() function allocates sufficient memory for a copy of the string s1,
 * does the copy, and returns a pointer to it. The pointer may subsequently be
 * used as an argument to the function free(3). In other words the function
 * strdup() is used to dupliacte a string. It returns a pointer to null-terminated
 * byte string.
 *
 * If insufficient memory is available, NULL is returned an errno is set to ENOMEM.  */


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*temp;
	size_t	i;

	i	= 0;
   str =(char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
   if (str == NULL)
	   return (NULL);
   if (s1 == NULL)
	   return (NULL);
   while (s1[i])
   {
	   str[i] = s1[i];
	   i++;
   }
   str[i] = '\0';
   return (str);
}

#include <stdlib.h>
#include <stdio.h>
#include<string.h>
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}


