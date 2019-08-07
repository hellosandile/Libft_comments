/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:32:17 by samkhize          #+#    #+#             */
/*   Updated: 2019/08/07 10:52:04 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void  ft_putnbr_fd(int n, int fd);
** Description: Outputs the integer n to the file descriptor fd.
** Param. #1: The integer to print
** Param. #2: The file descriptor
** Return value: None.
** Libc functions: write(2)
*/

/*This function writes the string s to the file descriptor fd followed by a
 * newline. This function is exactly the same as our ft_putendl function
 * except that we take in a parameter for the file descripotor. We will use
 * our ft_putstr_fd and ft_putchar_fd functions to make this function work.
 * Check out ft_putstr_fd and ft_putchar_fd to understand the inner workings
 * of this function.*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
