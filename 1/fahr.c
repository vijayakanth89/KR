#include <stdio.h>

main(){
	float fahr; 
	int cel;
	printf("Celcius to Fahrenheit table\n");
	for(cel=-100;cel<=100;cel++){
		printf("%d\t%f\n\n",cel, (9 * cel /5.0) + 32);
	}
}
