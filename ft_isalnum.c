/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:52:21 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:11:23 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalnum() function tests for any character for which isalpha(3) or 
 * isdigit(3) is true. The value of the argument must be representable as an
 * unsigned char or the value of EOF. In short, in the C programmming, isalnum() function
 * checks if the passed character is alphanumeric.
 *
 *RETURN VALUES: The isalnum() function returns zero if the character tests false
 and returns non-zero if the character tests true.
 * */

int		ft_isalnum.c(int c)
{
	if (ft_isdigit(c) || (ft_isalpha(c)
			return (1);
			return (0);
}

/* The main to test is the same as in isalpha. Work around that  */
