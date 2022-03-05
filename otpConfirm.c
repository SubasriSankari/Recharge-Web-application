
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int otpConfirm(){
	long otp;
	long otpConfirm;
	srand(time(NULL));
	for(int i=1 ;i<=6;i++){
		otp =otp*10 + (rand()%10);
	}
	printf("\nIn Few Mins...You will get a otp. \n\n"); 
	printf("Your otp is %ld... Please enter this to confirm !!\n\n", otp);
	scanf("%ld",&otpConfirm);
	printf("\n");
	if(otp == otpConfirm){
		printf("\n\nProcessing...\n");
		return 1;
	}
	else
	{
		printf("\nYou entered wrong otp :(  Please Try Again Later!!!\n\n");
		exit(0); 
	}
}
