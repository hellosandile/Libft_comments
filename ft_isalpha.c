/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:29:37 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/28 12:27:46 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalpha() function tests for any character for which isupper(3) or islower(3)
 * is true. The value of the argument mst be representable as an unsigned char
 * or the value of EOF. In short, in C programming, isalpha() function checks
 * whether a character is an alphabet (a to z and A-Z) or not.
 *
 * RETURN VALUE: The isalpha function returns zero if the character tests false
 * and returns non-zero if the character tests true. 
 *
 * Function isalpha() takes a single argument in the form of an integer and returns
 * an integer value */

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			return (1);
			return (0);
}

/* You can also create this function by creating the islower and isupper functions
 * first and then using them in the isalpha function  
 *
 *Example of all function working together -
 * 
 * int	ft_isupper(int c)
 * {
 * 	if (c >= 'A' && c <= 'Z')
 * 		return (1);
 * 		return (0);
 * }
 *
 *
 * int	ft_islower(int c)
 * {
 * 	if (c >= 'a' && c <= 'Z')
 * 		return (1);
 * 		return (0);
 * }
 *
 *
 * int	ft_isalpha(int c)
 * {
 * 	if (ft_isupper(c) || ft_islower(c)
 * 		return (1);
 * 		return (0);
 * }
 * 
 *
 * Example of C program to check whether a character entered by
 * user is alphabet or not
 *
 * #include <stdio.h>
 * #include <ctype.h>
 *
 * int	main()
 * {
 * 	char c;
 *
 * 	printf("Enter a character: );
 * 	scanf("%c", &c);
 *
 * 	if	(isalpha(c) == 0)
 * 		printf(%c is not an alphabet.", c);
 * 	else
 * 		printf("%c is an alphabet.", c);
 *
 * 	return (0);
 * }
 * */
