/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:00:29 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 09:23:37 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function computes the length of the string s. Important to note
 * is computes the length of the string s(or str) up to, but not including the
 * terminating null character
 *
 * RETURN VALUE: The strlen() function returns the number of characters that
 * precede the terminating NUL character  */

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
