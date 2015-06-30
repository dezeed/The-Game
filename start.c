#include<stdio.h>


void main(){
	
	int first, second, answer;
	char unit;
	printf(" - - - Math - - - \n");
	printf("first #: ");
	scanf("%d",&first);
	printf("\nsecond #: ");
	scanf("%d",second);
	printf("\nchoose: + - * / % \n");
	scanf("%c",&unit);
	printf("\nc: ");
	if(unit == '+') {
		answer = first + second;
		printf("%d", answer);
		
	} else if(unit == '-') {
		answer = first - second;
		printf("%d", answer);
		
	} else if(unit == 'x') {
		answer = first * second;
		printf("%d", answer);
		
	} else if(unit == '/') {
	 answer = first / second;
		printf("&d", answer);
		
	} else if(unit == '%') {
		answer = first % second;
		printf("%d", answer);
		
	} else {
		printf(" - - - Inter a unit - - - ");
		
	}
	printf("Type math to do another calculation");
	
	
}