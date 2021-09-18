#include <stdio.h>

int main ()
{
	int letter;

	while ((letter = getchar()) != EOF) {
		if (letter == '\t')
			printf("\\t");
		else if (letter == '\b')
			printf("\\b");
		else if (letter == '\\')
			printf("\\\\");
		else
			putchar(letter);
	}
	return 0;
}
