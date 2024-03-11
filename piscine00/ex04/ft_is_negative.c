#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		printf("N\n");
	}
	else
	{
		printf("P\n");
	}
}

int	main(void)
{
	int	num;

	printf("Enter an integer: ");
	scanf("%d", &num);
	ft_is_negative(num);
	return (0);
}
