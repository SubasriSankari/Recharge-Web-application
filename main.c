#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oldUser.c"
#include "existingUser.c"
#include "newUser.c"
#include "checkPhoneNumIsValid.c"
#include "display.c"

//extern oldUser user1;
int main(){


	int choose;
	do{
		printf("\nChoose Your Choice:\n\n");
		printf("\n1 -> Existing User\n");
		printf("2 -> New User\n");
		printf("3 -> Display\n");
		printf("0 -> Quit\n\n");
		scanf("%d",&choose);

		switch(choose){
			case 1:
				existingUser();
				break;
			case 2:
				newUser();
				break;
			case 3:
				display();
				break;
			case 0:
				printf("\nThank You:)\n\n");
				exit(0);
			default:
				printf("\nYou entered wrong key:(\n\n");
				exit(1);

		}

	}while(choose!=0);



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