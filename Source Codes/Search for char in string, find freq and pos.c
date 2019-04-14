#include <stdio.h>
#include <string.h>
void main()
{
	char s[150], c;
	int freq = 0, i;
	printf("Enter a string: ");
	gets(s);
	printf("Enter the search character: ");
	scanf("%c", &c);
	for (i = 0; s[i] != 0; ++i)
	{
		if (c == s[i])
		{
			freq++;
			printf("%c is present at %d\n", c, i);
		}
	}
	printf("%c is present %d times.\n", c, freq);
}
