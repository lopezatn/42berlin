#include <stdio.h>

int	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		printf("%c", number);
		number++;
	}
	return (0);
}
