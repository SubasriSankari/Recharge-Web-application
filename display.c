

void display(){
	FILE *file;
	file = fopen("recharge.txt","r");
	oldUser user;
	int flag = 1;
	while(fread(&user, sizeof(oldUser), 1, file)){
		printf("\nName .. %s\nMobile number.. %lld\nNetwork .. %s\nRecharged Date .. %d/%d/%d\nExpires On .. %d/%d/%d\n\n", 										user.name,user.num,user.simName,user.lastRechargeDate.day, 														user.lastRechargeDate.month,user.lastRechargeDate.year,
					user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
		flag = 0;
	}
	if(flag){
		printf("\nSorry There is no database:(\n\n");
	}
	fclose(file);
}