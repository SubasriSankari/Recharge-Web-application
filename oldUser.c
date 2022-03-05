#include <stdbool.h>
#include <stdio.h>
#include "Date.c"

typedef struct{
	char simName[20];
	char name[20];
	long long num;
	Date lastRechargeDate;
	Date expiredOn;
	bool expiredOrNot;
}oldUser;