/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:51:53 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/23 15:16:31 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

/* Side note: BOTH FUNCTIONS WORK 
 This function displays the string s to the standard output. We do this using
 out ft_putchar function. We start by declaring a size_t variable i that we
 will use to move through our string. We use a size_t beacuse it is guaranteed
 to be big enough to contain the size of the biggest object your system can
 handle. This way we can display the absolute biggest string that our computer
 can handle. We set i equal to 0 to start at the beginning of the parameter
 string s. We then do a simple loop stating that so long as we have not reached
 the end of our string we want the loop to continue. We move to each index position
 of our string and place the character in that position as a parameter for our
 ft_putchar function. The ft_putchar function will put that character in the
 standard output and then we increment the i variable to contine moving through
 the string. We do this untill we reach the terminating '\0' of the string.
 *
 * */

void	ft_putchar( char c);

void	ft_putstr(char const *s)
{
	size_t	i;
/*The NULL terminator is implecit at the ]) part of the while loop*/
	i = 0;
	while (s[i] != '\0')
		{		
		ft_putchar(s[i]);
		i++;
		}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 This function also works however I need to understand why it starts at -1
 for the counter.
 
void	ft_putstr(char *str)
{
	int	i = -1;
	while (str[++i]
	!= '\0')
	{
		ft_putchar(str[i]);
	}
}
*/

/* The main is simply there to test the working function*/

int	main(void)
{
	ft_putstr("The main to check that this shadis workds\n");
	return (0);
}
