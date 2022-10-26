#include <stdio.h>
#include<espl_lib.h>

int main(void){
	printf("Hello ESPL\n");
	printf("This is a new print\n");
	unsigned int input = getchar();
	char output;
	output =  num_to_words(input);
	printf("%c\n", output);
return 0;
}
