#include <stdio.h>
#include <time.h>
#include "otpConfirm.c"

extern oldUser user;

int changeDetails(int days){

	otpConfirm();

	time_t timer;
	timer = time(NULL);
	struct tm date = {0};
	date = *gmtime(&timer);
	
	user.lastRechargeDate.day = date.tm_mday;
	user.lastRechargeDate.month = date.tm_mon + 1;
	user.lastRechargeDate.year = date.tm_year + 1900;
	date.tm_year = date.tm_year;
	date.tm_mon = date.tm_mon;
	date.tm_mday = date.tm_mday + days;
	timer = mktime(&date);
	date = *gmtime(&timer);
	user.expiredOn.day = date.tm_mday-1;
	user.expiredOn.month = date.tm_mon +1;
	user.expiredOn.year = date.tm_year + 1900;
	user.expiredOrNot = false;
		//printf("Last Recharged on %d/%d/%d\n\n",user.lastRechargeDate.day,user.lastRechargeDate.month,user.lastRechargeDate.year);
		//printf("Expires on %d/%d/%d\n\n",user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
		
	
		
}