/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:08:47 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/27 13:46:05 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii checks whether c is a 7-bit unsigned char value that fits into
 * the ASCII character set.
 */

int		ft_isascii(int c)
{
	if ( c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// You could also use this syntax to write this function

int		ft_isascii(int c)
{
	return ( c >= 0 && c <= 127)
}
