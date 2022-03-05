
#include "append.c"


oldUser user;
void newUser(){

	long long int number;
	printf("\nPlease enter your Mobile number:\n");
	scanf("%lld",&number);
	checkPhoneNumIsValid(number);

	user.num = number;
	printf("\nPlease enter Your Details\n\n");
	printf("Enter Your Name:\n");
	scanf("%s",user.name);

	printf("\n\n ----------- Welcome %s -----------\n",user.name);
	printf("\nPlease choose Your network:\n\n");
	int choice;
	printf("**** 1 -> JIO network ****\n");
	printf("**** 2 -> Airtel network ****\n");
	printf("**** 3 -> VI network ****\n\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			strcpy(user.simName, "JIO");
			break;
		case 2:
			strcpy(user.simName, "AIRTEL");
			break;
		case 3:
			strcpy(user.simName, "VI");
			break;
		defualt:
			printf("\n\nYou entered wrong keyword:( ...Please try again later\n\n");
			exit(1);		
	}
	rechargeNow(user.simName);
	append(user);
}