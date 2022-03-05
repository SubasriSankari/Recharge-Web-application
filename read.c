

void read(){
	FILE *file;
	file = fopen("recharge.txt","r");
	oldUser user;
	while(fread(&user, sizeof(oldUser), 1, file)){
		printf("name %s, phone num %lld, sim %s ,Date %d\n",user.name,user.num,user.simName,user.lastRechargeDate.day);
	}
	fclose(file);
	
}