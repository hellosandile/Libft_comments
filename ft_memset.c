/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:33:06 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 11:11:51 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c (converted to an unsigned char)
 * to the string b. 
 *
 * In otherwords, the C library function void *memset(void *str, inc c, size_t n)
 * copies the character c (an unsigned char) to the first n characterss of the string
 * pointed to, by the argument str
 *
 * str - This is a pointer to the block of memory to fill.
 * c - This is the value to be set. The value is passed as an int, but the function
 * fills the block of memory using the unsigned char conversion of this value.
 *
 * RETURN VALUES: The memset() function returns its first argument  */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}


#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
}
