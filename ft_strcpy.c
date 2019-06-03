/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:19:49 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 10:15:33 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the strncpy() and strcpy() functions copy the string src to dst (including the
 * terminating '\0' character.)
 *
 * The C library function char *strcpy(char *dest, const char *src) copies the
 * string pointed to, by src to dest. Dest is the pointer to the destination array
 * where the content is to be copied and src is the string to be copied.
 *
 * Choose to name it dest or dst
 * */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
*/

int main()
{
    char str1[10]= "awesome";
    char str2[10];
    char str3[10];

   ft_strcpy(str2, str1);
   ft_strcpy(str3, "well");
    puts(str2);
    puts(str3);

    return 0;
}
