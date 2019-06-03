/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:13:11 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/23 10:39:51 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*putchar is a function that writes a single character to the standard output stream, 
  stdout. The character to be printed is fed into the function as an argument, 
  and if the writing is successful, the argument character is returned. 
  IMPORTANT to remember that the write function is in the unistd.h library */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* This main function used to test if the ft_putchar function works correctly 
   and in this case simply prints out the A character */

int	main(void)
{
	ft_putchar('A');
	ft_putchar('\n');
	return (0);

}
