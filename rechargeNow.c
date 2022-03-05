#include "planForJIO.c"
#include "planForAIRTEL.c"
#include "planForVI.c"
#include "changeDetails.c"
#include <string.h>

void rechargeNow(char name[]){
	if(strcmp(name,"JIO") == 0)
		planForJIO();
	else if(strcmp(name,"AIRTEL") == 0)
		planForAIRTEL();
	else if(strcmp(name,"VI") == 0)
		planForVI();
}