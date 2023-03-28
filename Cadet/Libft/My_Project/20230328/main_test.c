#include "stdio.h"

//int	ft_atoi(const char *str);
int	ft_toupper(int c);

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("input is error : argc = %d", argc);
		return(1);
	}
	printf("The function is %c\n", ft_toupper(*argv[1]));
	return(0);
}
