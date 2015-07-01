#include<stdio.h>
#include<stdlib.h>
#include"myinfo.h"


void main(){
	
	// name as and info creepy sh*t!!!
	/*
	char name[37], school[40], color[18];
	int age;
	printf("Hi! My name is %s. I go to %s. It an \namazing school.", MYNAME
, MYSCHOOL);
	printf(" I Just turned %s and my favorite color is %s.\n\n", MYAGE, MYCOLOR);
	printf("What is your name?\n");
	scanf("%s", name);
	printf("\nWhat school do you go to?\n");
	scanf("%s", school);
	printf("\nWhat is you favorite color?\n");
	scanf("%s", color);
	printf("\nHow old are you?\n");
	scanf("%d", &age);
	printf("\nHi! My name is %s. I go to %s. It an \namazing school.", name
, school);
	printf(" I Just turned %d and my favorite color is %s.\n", age, color);	
	printf("\nis that creepy %s?\n", name);
	*/
	// math stuff
	
	/*
	int a, b;
	char unit;
	printf(" - - - Math - - - \n");
	printf("Number 1: ");
	scanf("%d",&a);
	printf("\nNumber 2: ");
	scanf("%d",&b);
	printf("\nwhat is your unit - + / * \n");
	scanf("%c",&unit);
	if(unit == '-') {
		printf("\nAnswer: ", a-b);
		
	} else if(unit == '+') {
		printf("\nAnswer: ", a+b);
		
	} else if(unit == '/') {
		printf("\nAnswer: ", a/b);
		
	} else if(unit == '*') {
		printf("\nAnswer: ", a*b);
		
	}  else {
		printf("\n - - - no unit selected - - -");
		
	}
	
	float average;
	int catFees = 120;
	int adoptionCount = 231;
	int daysOfAdoption = 13;
	average = ( (float)catFees * (float)adoptionCount) / (float)daysOfAdoption;
	printf("Average money made on cat adoptions: %.2f", average);
	*/
	int studyTime, goodKid;
	printf("study Time:");
	scanf("%d", &studyTime);
	printf("Children bullied:");
	scanf("%d", &goodKid);
	
	if((studyTime>=8) && (goodKid==0)) {
		printf("You are a good kid.");
	} else if((studyTime>=8) || (goodKid==0)){
		printf("You need some improvement.");
	} else {
		printf("You are a bad Kid.");
	}
	
	//next section
	
	printf("\n");
	int favNumb;
	printf("What is your favorite number?");
	scanf("%d",&favNumb);
	(favNumb>=9) ? printf("You like big numbers!") : printf("You like smaller numbers!");

}