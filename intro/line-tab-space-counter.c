#include <stdio.h>

int main(void)
{
	int c, nl, s, t;

	nl = 0;
	s = 0;
	t = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nl;
		if (c == ' ')
			++s;
	}

	printf("Spaces: %d \n Tabs: %d \n and Newlines: %d \n", s, t, nl);
}
