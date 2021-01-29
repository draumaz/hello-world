#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	
	char opt1[50];
	char s1o[50];
	char s1o1[50];
	char s1o2[50];
	char s1o3[50];
	char s2o[50];
	char s2o1[50];
	char s2o2[50];
	char s2o3[50];
	char s3o[50];
	char s3o1[50];
	char s3o2[50];
	char s3o3[50];
	
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

	if(strcmp(opt1, "1")==0){
		printf("Welcome to the first Submenu.\n");
		printf("S1O[1] \n");
		printf("S1O[2] \n");
		printf("S1O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", s1o);
	
		if(strcmp(s1o, "1")==0){
			printf("You have entered S1O1.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s1o1);
			if(strcmp(s1o1, "E")==0){
			printf("Exiting...\n");
			goto MAINMENU;
		}}

		if(strcmp(s1o, "2")==0){
			printf("You have entered S1O2.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s1o2);
			if(strcmp(s1o2, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s1o, "3")==0){
			printf("You have entered S1O3.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s1o3);
			if(strcmp(s1o3, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s1o, "B")==0){
			goto MAINMENU;
		}}
		
		//END SUB-MENU ONE//

		//BEGIN SUB-MENU TWO//

	if(strcmp(opt1, "2")==0){
		printf("Welcome to the second Submenu.\n");
		printf("S2O[1] \n");
		printf("S2O[2] \n");
		printf("S2O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", s2o);
		
		if(strcmp(s2o, "1")==0){
			printf("You have entered S2O1.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s2o1);
			if(strcmp(s2o1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s2o, "2")==0){
			printf("You have entered S2O2.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s2o2);
			if(strcmp(s2o2, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s2o, "3")==0){
			printf("You have entered S2O3.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s2o3);
			if(strcmp(s2o3, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s2o, "B")==0){
			goto MAINMENU;
		}}
	
		//END SUB-MENU TWO//
	
		//BEGIN SUB-MENU THREE//
		
	if(strcmp(opt1, "3")==0){
		printf("Welcome to the third Submenu.\n");
		printf("S3O[1] \n");
		printf("S3O[2] \n");
		printf("S3O[3] \n");
		printf("[B]ACK \n");
		printf("Please choose a submenu >> ");
		scanf("%s", s3o);

		if(strcmp(s3o, "1")==0){
			printf("You have entered S3O1.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s3o1);
			if(strcmp(s3o1, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s3o, "2")==0){
			printf("You have entered S3O2.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s3o2);
			if(strcmp(s3o2, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}

		if(strcmp(s3o, "3")==0){
			printf("You have entered S3O3.\n");
			printf("[E]XIT\n");
			printf("Please make a choice >> ");
			scanf("%s", s3o3);
			if(strcmp(s3o3, "E")==0){
			printf("Exiting... ");
			goto MAINMENU;
		}}
		if(strcmp(s3o, "B")==0){
			goto MAINMENU;
		}}

		//END SUB-MENU THREE//
	
	return 0;
}
