#include <stdio.h>

int main ()
{
	int c, nl, blanks, tabs;

	nl = blanks = tabs = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;

	printf("New lines = %d\nBlanks = %d\nTabs = %d\n", nl, blanks, tabs);
}
