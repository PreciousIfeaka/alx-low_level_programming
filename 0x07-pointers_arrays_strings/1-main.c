#include "main.h"
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n);
int main(void)
{
	char brm[] = "Whiskey lane association";
	char ber[] = "Scholarstica";

	_memcpy(brm + 3, ber, 9);
	printf("%s\n", brm);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *buff = dest;                                                                    while (n--)                                {                                                  *buff++ = *src++;
        }                                          return (dest);                     }
