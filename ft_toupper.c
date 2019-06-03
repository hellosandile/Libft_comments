/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:38:52 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/24 14:03:12 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The toupper() function converts a lower-case letter to the corresponding
   upper-case letter. The argument must be representable as an unsigned char or
   the value of EOF.

   RETURN VALUES: If the argument is a lower-case letter, the toupper() function
   returns the corresponsing upper-case letter if there is one; otherwise the
   argument is returned unchanged.
 */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -32);
	else
		return (c);
}
/*
 *
 This is another way of doing it :)
 *
int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

*/

/* The main function I used to test. Try is with a putstr next  */

int	main(void)
{
	int c = ft_toupper('j');
	
	ft_putchar(c);
	ft_putchar('\n');

	return 0;
}
