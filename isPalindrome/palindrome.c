#include <stdbool.h>

bool isPalindrome(int x)
{
	int	check;

	check = 0;
	if (x < 0 || x != 0 && x % 10 == 0)
		return (false);
	while (x > check)
	{
		check *= 10 + x % 10;
		x /= 10;
	}
	return (x == check || x == check / 10);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", isPalindrome(85277258));
}
