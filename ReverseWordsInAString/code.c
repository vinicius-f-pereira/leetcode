#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *reverseWords(char * s)
{
	int 	start = 0;
	int 	end = 0;
	int	current = 0;
	int	end1 = 0;
	char    *reverse = calloc(sizeof(char), strlen(s) + 1);
	
	while (s[end] != '\0')
	{
		while (isspace(*s))
			s++;
		while (!isspace(s[end]) && s[end])
			end++;
		end1 += end;
		while (end1)
		{
			end1--;
			reverse[current] = s[end1];
			current++;
			if (end1 == start)
				break;
		}
		if (s[end++] != '\0')
			reverse[current] = ' ';
		current++;
		start += end;
	}
	return (reverse);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", reverseWords("God Ding"));
	printf("%s\n", reverseWords("Let's take LeetCode contest"));
	return (0);
}

