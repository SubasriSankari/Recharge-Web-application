

extern oldUser user;
void append(){
	FILE *file;
	file = fopen("recharge.txt","a");
	if(file == NULL){
		fprintf(stderr, "\nError to open the file\n");
		exit(1);	
	}
	//printf("%s",user.name);
	
	fwrite(&user, sizeof(oldUser), 1, file);
	printf("\n\n*** You have Recharged Successfully:) ***\n");
	printf("Your plan will expires on %d/%d/%d\n\n",user.expiredOn.day, user.expiredOn.month, user.expiredOn.year);
	fclose(file);
	

	/*FILE *inf;
	oldUser inp;
	inf = fopen("recharge.txt","r");
	if(inf == NULL){
		fprintf(stderr,"Error");
		exit(1);
	}
	while(fread(&inp,sizeof(oldUser),1,inf)){
		printf("name %s, phone num %lld, sim %s ,Date %d\n",inp.name,inp.num,inp.simName,inp.lastRechargeDate.day);
	}
	fclose(inf);*/
}