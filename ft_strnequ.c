/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 11:02:16 by samkhize          #+#    #+#             */
/*   Updated: 2019/08/07 11:02:18 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: Lexicographical comparison between s1 and s2 up to
 * n characters or until a '\0' is reached. If the 2 strings are
 * identical, the function returns 1, or 0 otherwise.
 *
 * Param #1: The first string to be compared
 * Param #2: The second string to be compared
 *
 * Return vale: 1 or 0 according to if the 2 strings are identical
 * or not.*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t cnt;

	cnt = 0;
	if (n == 0 || s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[cnt] && s1[cnt] == s2[cnt] && cnt < (n - 1))
		cnt++;
	if (s1[cnt] == s2[cnt])
		return (1);
	return (0);

}

/*
{
	while (n--) // decrements the vaule of n after the expression is evaluated
	{
		if (s1 == NULL || s2 == NULL)
			return (0);
		if (ft_strcmp(s1, s2) == 0
				return (1);
	}
	return (0);
}
*/
