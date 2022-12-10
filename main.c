#include <stdio.h>
#include <ctype.h>

int main()
{

	char string[65536];

	printf("Please type some text: ");

	fgets(string, sizeof(string), stdin);

	for (int i = 0; i < sizeof(string); i++)
	{
		string[i] = tolower(string[i]);
	}

	printf(string);

	return 0;
}

char toMorse()
{
}