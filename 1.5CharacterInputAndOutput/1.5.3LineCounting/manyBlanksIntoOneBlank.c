#include <stdio.h>

int main ()
{
	int character;

	while ((character = getchar()) != EOF) {
		if (character == ' ') {
			putchar(' ');
			while (character == ' ')
				character = getchar();
		}
		putchar(character);
	}
	return 0;
}
