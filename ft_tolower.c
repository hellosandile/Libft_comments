/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:30:09 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/24 16:22:19 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The tolower() function converts an upper-case letter to the corresponding
 * lower-case letter. The argument must be representable as an usigned char or
 * value of EOF.
 *
 * Return values: If the argument is an upper-case letter, the tolower() function
 * returns the corresponding lower-case if there is one; otherwise, the argument
 * is returned unchanged
 *
 * The character is stored in integer form in C programming. When a character
 * is passed as an argument, corresponding ASCII value (integer) of the character
 * is passed instead of that character itself.
 * */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*The += are used to increment the values with the value specified after = symbol.
*/

/* This is another way to do it wihout the else statement

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c -32)
	else
		return (c);
}


/* The main is used to test  */

int	main(void)
{
	int c = ft_tolower('A');

	ft_putchar(c);
	ft_putchar('\n');
	return (0);
}
