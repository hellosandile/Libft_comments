#include "libft.h"

/*Prototype: void  ft_putnbr_fd(int n, int fd);
 * Description: Outputs the integer n to the file descriptor fd
 * Param. #1: The integer to print
 * Param. #2: The file descriptor.
 * Return Value: None
 * Libc function: write(2)*/

/*This function is exactly the same as our ft_putnbr function except that we
 * will be using our ft_putchar_fd function instead of ft_putchar beacuse we
 * weill be accepting a parmeter for this function that is our file descriptor.
 * I recommend learning how the the ft_putnbr and ft_putchar_fd functions work
 * in order to understand how this function workds. The explanation of the inner
 * workings of this function are the same as I gave for ft_putnbr.*/


void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}oid	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

