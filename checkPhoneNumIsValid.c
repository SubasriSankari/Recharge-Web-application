

int checkPhoneNumIsValid(long long number){
	long long copy = number;
	int count = 1;
	while(copy > 9){
		copy /= 10;
		count ++;
	}
	//printf("count %d copy %d", count, copy);
	if(count != 10 || (copy != 7 && copy != 8 && copy != 9) )
	{
		printf("\nInvalid.... Please enter valid phone number!!!\n\n");
		exit(0);
	}
	return 1;
}