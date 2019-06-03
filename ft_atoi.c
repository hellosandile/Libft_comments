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
 * value. If no valid conversion could be performed, it returns zero.
 *
 *
 * NB: Write the comments when you get home after cloning your work
 * */

int		ft_atoi(const char *str)
{
	long	nbr;
	long	sign;
	int		i;

	i = 0;
	nbr = 0;
	sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			str[i] =='\r' || str[i] == '\v' || str[i] == '\f')
		i++;

	if (str[i] == '-' || or str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}

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
