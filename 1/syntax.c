#include <stdio.h>

char DOUBLE_BRACE[] = {'{', '}'};
char SINGLE_BRACE[] = {'(',')'};
char SQUARE_BRACE[] = {'[',']'};
char DOUBLE_QUOTES[] = {'\"','\"'};
char SINGLE_QUOTES[] = {'\'', '\''};

int START = 0;
int END = 1;



int main(int argc, char *argv[])
{
	char ch;
	while( (ch = getchar() ) != EOF){
		switch(ch){
			case DOUBLE_BRACE[START]:
				// register in map
				break;
		}
	
	}
	return 0;
}
