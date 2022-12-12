#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[65536] = {0};
	char result[6];

	printf("Please type some text: ");

	fgets(string, sizeof(string), stdin);

	for (int i = 0; i < sizeof(string); i++) // converts every letter to lowercase
	{
		if (string[i] == '\0') // stops at null
			break;
		string[i] = tolower(string[i]);
	}

	for (int i = 0; i < sizeof(string); i++) // runs through each character and outputs the morse code version
	{
		if (string[i] == '\0') // stops at null
			break;
		toMorse(string[i]);
	}
	printf("\n");

	return 0;
}

// TODO: FIND A BETTER WAY TO CONVERT TO MORSE CODE, CURRENT WAY IS CLUNKY

void toMorse(char letter)
{
	switch (letter)
	{
	case 'a':
		printf("/.-");
		return 0;
	case 'b':
		printf("/-...");
		return 0;
	case 'c':
		printf("/-.-.");
		return 0;
	case 'd':
		printf("/-..");
		return 0;
	case 'e':
		printf("/.");
		return 0;
	case 'f':
		printf("/..-.");
		return 0;
	case 'g':
		printf("/--.");
		return 0;
	case 'h':
		printf("/....");
		return 0;
	case 'i':
		printf("/..");
		return 0;
	case 'j':
		printf("/.---");
		return 0;
	case 'k':
		printf("/-.-");
		return 0;
	case 'l':
		printf("/.-..");
		return 0;
	case 'm':
		printf("/--");
		return 0;
	case 'n':
		printf("/-.");
		return 0;
	case 'o':
		printf("/---");
		return 0;
	case 'p':
		printf("/.--.");
		return 0;
	case 'q':
		printf("/--.-");
		return 0;
	case 'r':
		printf("/.-.");
		return 0;
	case 's':
		printf("/...");
		return 0;
	case 't':
		printf("/-");
		return 0;
	case 'u':
		printf("/..-");
		return 0;
	case 'v':
		printf("/...-");
		return 0;
	case 'w':
		printf("/.--");
		return 0;
	case 'x':
		printf("/-..-");
		return 0;
	case 'y':
		printf("/-.--");
		return 0;
	case 'z':
		printf("/--..");
		return 0;

	default:
		break;
	}
}