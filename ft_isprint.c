/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:13:36 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/27 13:07:45 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for any printable character including space (ASCII 32)
 *
 * The isprint() function tests for any printing character, including space (' ').
 * The value of the argument must be representable as an unsigned char or the value EOF.
 *
 * RETURN VALUES: The isprint() function returns zero 
 * if the character tests false and returns non-zero if the character tests true.*/

int		ft_isprint(int c)
{
	if ( c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* This is anoter way to write this funciton in the c language

int		ft_isprint(int c)
{
	return (32 >= c && c <=126);
}

I could also do this function by placing the ' ' and tilde '~'. This would be difficult
to do simply beacuse you would need to know what the pc recognises as the first printable
character and the last one.

int		ft_isprint(int c)
{
	return (c >= ' ' && c <= '~'
}

*/
