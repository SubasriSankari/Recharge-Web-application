#include <stdio.h>
#include "rechargeNow.c"
#include "edit.c"

oldUser user;
int existingUser(){
	FILE *file;
	file = fopen("recharge.txt","r");
	if(file == NULL){
		fprintf(stderr, "\nError to open the file\n");
		exit(1);	
	}

	long long int number;
	printf("\nPlease enter your Mobile number:\n");
	scanf("%lld",&number);
	checkPhoneNumIsValid(number);
	int check = 1;

	int flag = 1;
	while(fread(&user,sizeof(oldUser),1,file)){
		if(number == user.num && user.expiredOrNot)
		{	
			printf("\nName .. %s\nMobile number.. %lld\nNetwork .. %s\nRecharged Date .. %d/%d/%d\nExpires On .. %d/%d/%d\n\n", 										user.name,user.num,user.simName,user.lastRechargeDate.day, 														user.lastRechargeDate.month,user.lastRechargeDate.year,
						user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
			printf("\n--1.Recharge Now --\n");
			printf("--2.Not now --\n\n");
			int choice;
			scanf("%d",&choice);
			switch(choice){
				case 1:
					rechargeNow(user.simName);
					edit(user.name);
					printf("\nYou have Recharged Successfully:)\n\n");
					printf("\nYour Plan will expires on %d/%d/%d \n\n",user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
				case 2:
					printf("\nThank You:)\n\n");
					exit(1);
			}
			check = 0;
		}
		else if(number == user.num)
		{
			printf("\n----- Welcome %s -----\nYour Plan will expires on %d/%d/%d \n\n", 													user.name,user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
			check = 0;
		}
		flag = 0;
	}
	fclose(file);
	if(flag)
	{
		printf("\n  Sorry!! This is empty database:(\n\n");
		return 1;
	}
	if(check)
		printf("\nSorry... You are new user...Please choose new user!!\n\n");
	
	
}	