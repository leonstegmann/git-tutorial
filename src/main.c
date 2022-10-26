#include <stdio.h>
#include <espl_lib.h>

int main(void){
	printf("Hello ESPL\n");
	char stop = '1';
	do {
		printf("\nPlease enter Number: ");
		unsigned int input;
		scanf("%d", &input);
		char *output =  num_to_words(input);
		printf("%c\n", *output);
		printf("Wish to exit? Press 0. Else press any other key: ");
		while ((getchar()) != '\n');
		stop = getchar(); //flushes the input buffer
	} while (stop != '0');
return 0;
}
