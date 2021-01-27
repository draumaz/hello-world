#include <stdio.h>

int main() {
	
	char name[20];
	char age[20];
	
	printf("What is your name? ");
	scanf("%s", name);
	
	printf("Hi, %s! What is your age? ", name);
	scanf("%s", age);

	printf("Your name is %s, and your age is %s.\nYour information has been logged.\nThank you!\n", name, age);
	
	return 0;

}
