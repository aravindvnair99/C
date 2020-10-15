#include<stdio.h>
void main() {
  char s1[100] = "programming ", s2[] = "is awesome";
  int len, j;
  len = 0;
  while (s1[len] != '\0') {
    ++len;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++len) {
    s1[len] = s2[j];
  }

  // terminating the s1 string
  s1[len] = '\0';
  printf("After concatenation: ");
  puts(s1);

}
