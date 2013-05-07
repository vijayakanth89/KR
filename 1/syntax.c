#include <stdio.h>

char DOUBLE_BRACE[] = {'{', '}'};
char SINGLE_BRACE[] = {'(',')'};
char SQUARE_BRACE[] = {'[',']'};
char DOUBLE_QUOTES[] = {'\"','\"'};
char SINGLE_QUOTES[] = {'\'', '\''};


int main(int argc, char *argv[])
{
	char ch;
	while( (ch = getchar() ) != EOF){
		if (ch == '{' || ch == '}')
			printf("%c", ch);	
	}
	return 0;
}
