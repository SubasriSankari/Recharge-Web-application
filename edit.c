#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern oldUser user;
void edit(char name[]) {
	FILE *file,*file1;
        file = fopen("recharge.txt", "r");
   	file1 = fopen("temp.txt","w");
  	if (file == NULL) {
  		fprintf(stderr, "\nError to open the file\n");
      		exit (1);
   	}
	oldUser exp;
   	int found = 0;
   	while(fread(&exp,sizeof(oldUser),1,file)){
		if(strcmp(exp.name,user.name) == 0){
			//printf("%s1\n",user.name);
			found = 1;
			
			exp.lastRechargeDate.day = user.lastRechargeDate.day;
			exp.lastRechargeDate.month = user.lastRechargeDate.month;
			exp.lastRechargeDate.year = user.lastRechargeDate.year;
			exp.expiredOn.day = user.expiredOn.day;
			exp.expiredOn.month = user.expiredOn.month;
			exp.expiredOn.year = user.expiredOn.year;
			exp.expiredOrNot = false;
			fwrite(&exp, sizeof(oldUser),1,file1);
			//printf(" expiry %d/%d/%d\n",user.expiredOn.day,user.expiredOn.month,user.expiredOn.year);
		}
		else{
			//printf("%s2\n",user.name);
			fwrite(&exp, sizeof(oldUser),1,file1);
		}	
	}
   	fclose(file);
   	fclose(file1);
 
	if(found)
 	{
   		file = fopen("recharge.txt", "w");
   		file1 = fopen("temp.txt","r");
   		while(fread(&exp, sizeof(oldUser),1,file1)){
			fwrite(&exp, sizeof(oldUser),1,file);
   		}
		fclose(file);
   		fclose(file1);
   	}
}