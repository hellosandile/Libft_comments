/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:19:08 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 15:58:54 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcmp() function compares byte string s1 against byte string s2. Both
 * strings are assumed to be n bytes long.
 *
 * The C library function int memcmp(const void *str1, const void *str2, size_t n)
 * compares the first n bytes of memory area str1 and memory area str2.
 *
 * Parameters
 *
 * str1 - This is the pointer to a block of memory
 * str2 - This is the pointer to a block of memory
 * n - This is the number of bytes to be compared.
 *
 * RETURN VALUES: The memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference between the first two differing bytes (treated
 * as unsigned char values, so the '\200' is greater than '\0', for example).
 * Zero-length strings are always identical. This behavior is not required by C
 * and portable code should only depend on the sign of the returned value.  */

int		ft_memcmp(const void s*1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (str[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char(str2[i]);
						i++;
	}
	return (0);
}

Check this main tester at home chief

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
