/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:37:56 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/28 11:28:47 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function tests for a decimal digit character. Even though,
 * isdigit() takes integer as an argument, character is passed to the function.
 * Internally, the character is converted to its ASCII value for the check.
 *
 * RETURN VALUES: The isdigit () and isnumber() functions returns zero if the
 * character tests false and return non-zero if the character tests true.  */

int		ft_isdigit.c(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


/* This is the test main that must be converted into my own functions
 *
 * #include <stdio.h>
 * #include <ctype.h>
 *
 * int	main()
 * {
 *		char c;
 *		c = '5';
 *		printf("Result when numberic character is passed: %d, isdigit(c));
 *
 *		c = '+';
 *		printf("\nResult when non-numeric character is passed: %d, isdigit(c));
 *
 *		return (0);
 *	}
 *
 *		_______________
 *
 *		Example of C program to chech whether a character entered by user is numberic
 *		character of NOT
 *
 *	#include <stdio.h>
 *	#include <ctype.h>
 *
 *	int	main()
 *	{
 *		char c;
 *
 *		printf("Enter a character: ");
 *		scanf("%c", &c);
 *
 *		if (isdigit(c) == 0)
 *			printf("%c is not a digit.", c);
 *		else
 *			printf("%c is a digit.",c);
 *		return (0);
 * }
 *
 *
 * */
