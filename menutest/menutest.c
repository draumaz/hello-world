#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
char opt1[50];
char nav1[50];
	
MAINMENU:

	//DEBUGGER START//
	//printf("DEBUGGER\n");
	//printf("OPT1 = %s\n", opt1);
	//printf("\n");
	//printf("\n");
	//DEBUGGER END//

	//CLEAR MEMORY//
	memset(opt1, '\0', 1000);

	printf("MAIN MENU \n");
	printf("Submenu [1] \n");
	printf("Submenu [2] \n");
	printf("Submenu [3] \n");
	printf("Please choose a submenu >> ");
	scanf("%s", opt1);

		//BEGIN SUB-MENU ONE//

SUB1:

	if(strcmp(opt1, "1")==0){
		printf("Welcome to the first Submenu.\n");
		printf("S1O[1] \n");
		printf("S1O[2] \n");
		printf("S1O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", nav1);
	
		if(strcmp(nav1, "1")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S1O1.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting...\n");
			goto MAINMENU;
			}
			else {
			goto SUB1;
		}}

		if(strcmp(nav1, "2")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S1O2.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB1;
		}}

		if(strcmp(nav1, "3")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S1O3.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB1;
		}}

		if(strcmp(nav1, "B")==0){
			goto MAINMENU;
		}}
		
		//END SUB-MENU ONE//

		//BEGIN SUB-MENU TWO//

SUB2:

	if(strcmp(opt1, "2")==0){
		memset(nav1, '\0', 1000);
		printf("Welcome to the second Submenu.\n");
		printf("S2O[1] \n");
		printf("S2O[2] \n");
		printf("S2O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", nav1);
		
		if(strcmp(nav1, "1")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S2O1.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB2;
		}}

		if(strcmp(nav1, "2")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S2O2.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB2;
		}}

		if(strcmp(nav1, "3")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S2O3.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB2;
		}}

		if(strcmp(nav1, "B")==0){
			goto MAINMENU;
		}}
	
		//END SUB-MENU TWO//
	
		//BEGIN SUB-MENU THREE//

SUB3:

	if(strcmp(opt1, "3")==0){
		memset(nav1, '\0', 1000);
		printf("Welcome to the third Submenu.\n");
		printf("S3O[1] \n");
		printf("S3O[2] \n");
		printf("S3O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", nav1);

		if(strcmp(nav1, "1")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S3O1.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB3;
		}}

		if(strcmp(nav1, "2")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S3O2.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB3;
		}}

		if(strcmp(nav1, "3")==0){
			memset(nav1, '\0', 1000);
			printf("You have entered S3O3.\n");
			printf("[E]XIT\n");
			printf("[B]ACK\n");
			printf("Please make a choice >> ");
			scanf("%s", nav1);
			if(strcmp(nav1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
			}
			else {
			goto SUB3;
		}}
		if(strcmp(nav1, "B")==0){
			goto MAINMENU;
		}}

		//END SUB-MENU THREE//
	
	return 0;
}
