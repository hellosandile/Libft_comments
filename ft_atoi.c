/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:41:51 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/03 10:52:21 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi() function converts the initial portion of the string pointed to by
 * str to int representation.
 *
 * The atoi function skips all white-space characters at the beginning of the
 * string, converts the subsequent characters as part of the number, and then
 * stops when in encounters the first character that isn't a number.
 *
 * str - This is the string representation of an intergral number.
 *
 * RETURN VALUE: This function returns the converted integral number as an int
 * value. If no valid conversion could be performed, it returns zero.*/

/* This is a recreation of the atoi function in C. We take a string of characters
 * that are supposed to be a number converted into an int. According to the man,
 * "The atoi function converts the initial portion of the string point to by str
 * to int representation."*/

int		ft_atoi(const char *str)
{
	/* We start off by creating three variables. The first is what will hold
	 * our result that is to be returned. We use long because it is guaranteed
	 * to be able to store, at the very least, values that lie within the range
	 * of -2147483647 and 2147483647. Sign will be what we use to turn the int
	 * negative in the event that its a negative number that is put in the
	 * end. We next have an int 1, which will be the counter for our string.
	 * In order to be able to compensate for an incredibly long string we use
	 * an unsinged int to be able to use its extended positive range it has
	 * over a signed int. We will set all of them to 0 except for our sing
	 * which we set at 1 to use based on the appearance of a negative symbol
	 * in our string*/
	long	nbr;
	long	sign;
	unsigned int		i;

	i = 0;
	nbr = 0;
	sign = 1;
	/* The first thing we want our function to do is make sure to skip over
	 * any kind of spacing that could be found at the beginning of the string*/

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			str[i] =='\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	/* Once past the extra spacing, if it exists, we are checking to see if there
	 * is a negative symbol at the beginning of the number we will be converting
	 * if we see a negative symbol or a positive symbol we adjust accordingly. If
	 * it's negative we set our sign equal to -1 to multiply to our result when
	 * we return it.*/

	if (str[i] == '-' || or str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	/* Here we convert our string of characters from char to int so long as they
	 * are numbers. If the character we are currently on is a number, we converted
	 * it to its ascii numerical value. For the first character nbr is always set
	 * currently at 0. We multiply 10 immdiately by our nbr to set up the digit
	 * placement where it should be. We then subtract the numerical value of the
	 * character 0 on the ascii table from our currenlty character number. This
	 * set s it to its ascii numerical value. We then start our loop over and
	 * continue until we hit a character that is not a number.*/

	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	/* Last we return the res value multiplied by the sign value to return the
	 * number based on whether it was negative or not. NOTE: We have int in
	 * parenthesis to cast the nbr * sign into an int so it can be returned as
	 * an int.*/

	return ((int)(nbr * sign));
}

/* The following exampple shows the usage of atoi() function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main ()
{
	int val;
	char str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	prinft("String value = %s. Int value = %d\n", str, val);

	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	return (0);
}

*/
