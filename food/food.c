#include <stdio.h>
int main( ) {

	char str[100];
	int i;
	
	printf("What's your favorite food?");
	scanf("%s", str, &i);

	printf("Your favorite food is %s.\n", str, i);
	
	return 0;
}
