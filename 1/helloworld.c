#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	char *hello_message;
	hello_message = (char *) malloc(sizeof(char) *10);
	memset(hello_message, '\0', 100);
        strcpy(hello_message, "Hello World\n");
	while(*hello_message!='\0'){
		putchar(*hello_message);
		hello_message++;
	}
}
