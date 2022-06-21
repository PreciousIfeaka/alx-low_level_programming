#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);

int main(void)
{
	char brm[] = "Whiskey lane association";
	
	_memset(brm+2, '+', 6);
	printf("%s\n", brm);
}

char *_memset(char *s, char b, unsigned int
 n)                                        {
        char *buff = s;
	
	while (n--)
		*buff++ = b;
	return (s);
}
