/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:14:23 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/10 10:17:02 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is made to apply the parameter function f to each character in
a string passed as the parameter s. Each character is passed by the address to the
function f so that it can be modified if necessary.*/

void	ft_striter(char *s, void (*f)(char *))
{
	/* We start off by creating our couter variable i and making it an unsigned int
	 * in case we have a very large string. We then run a loop that will continue
	 * untill we reach the end of the given string. We run the function f on each
	 * character of the string. We use the string s + the variable i beacuse this is
	 * an easier way to send an address of a string position. Once the end of string
	 * is reached the function is finsished.  */
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}

//Another way to do it. Need to test though

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL) // Could also protect function with - if (!s || !f)
		return ;
	while (s != NULL && *s)
		f(s++);
}


