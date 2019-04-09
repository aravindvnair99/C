#include <stdio.h>
#include <string.h>
void main()
	{
		int len, i;
		char s1[100];
		printf("Enter a word: \n");
		scanf("%s", s1);
		len = strlen(s1);
		char s2[len];
		for (i=0; s1[i] != '\0'; i++)
			{
				s2[len-i-1] = s1[i];
			}
		s2[i] = '\0';
		if (strcmp(s1,s2) == 0)
			printf("Palindrome.\n");
		else
			printf("Not a palindrome.\n");
	}
