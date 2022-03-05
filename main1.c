#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oldUser.c"

int main () {
   FILE *file,*file1;
   file = fopen("recharge.txt", "a");
   if (file == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   oldUser user;
   /*int found = 0;
   while(fread(&user,sizeof(oldUser),1,file)){
	if(user.num == 0 || user.expiredOn.month == 8){
		found = 1;
	}
	else{
		fwrite(&user, sizeof(oldUser),1,file1);
	}	
   }
   fclose(file);
   fclose(file1);
 
   if(found){
   file = fopen("recharge.txt", "w");
   file1 = fopen("temp.txt","r");
   while(fread(&user, sizeof(oldUser),1,file1)){
	fwrite(&user, sizeof(oldUser),1,file);
   }
   }*/

   strcpy(user.name, "ran");
   strcpy(user.simName, "AIRTEL");
   user.num = 9021456327;
   user.lastRechargeDate.day = 14;
   user.lastRechargeDate.month = 6;
   user.lastRechargeDate.year = 2021;
   user.expiredOn.day = 11;
   user.expiredOn.month = 7;
   user.expiredOn.year = 2021;
   user.expiredOrNot = true;
   fwrite(&user, sizeof(oldUser), 1, file);
   printf("Success..");
   fclose (file);
}







