#include "main.h"
#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);
int main(void)
{
	int n = 6;
	char st1[24] = "Jumpologyography";
	char st2[8] = "Cradle";

	char *ptr = _strncpy(st1, st2, n);
	printf("%s\n", ptr);
}

char *_strncpy(char *dest, char *src, int n)
{                                                  int i = 0;
        char *buff = dest;

        while (*src != '\0' && i < n)              {                                                  i++;                                       *dest++ = *src++;                  }
	while (*dest != '\0' && i >= n)
                *dest++;
	*dest = '\0';                              return (buff);
}
