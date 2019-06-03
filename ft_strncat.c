/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:53:17 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:53:22 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strncat () function appends the src string to the dst string., overwriting
the terminating null byte ('\0') at the end of dst, and then adds terminating null
byte. The strings may not overlap. and the dst string must have enough space for
the result. If dst is not large enough, program behavior is umpredictable; buffer
overruns are a favourite avenue for attacking secure programs

The strncat() function is similar, except that

* it will use at most n bytes from src, and
* src does not need to be null-terminated if it contains n or more bytes

RETURN VALUES: The strcat() and strncat() functions return a pointer to the
resulting string dst  */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t l;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
