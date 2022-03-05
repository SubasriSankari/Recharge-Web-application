#include <stdio.h>

typedef struct{
	int cost ;		// cost for plan 1
	int days ;		// plan 1 valid per day
	int data ;		// plan 1 data GB/day
}plan1ForJIO, plan2ForJIO, plan3ForJIO;


void planForJIO()
{
	plan1ForJIO plan1 ={249, 28, 2};
	plan2ForJIO plan2 ={599, 84, 2};
	plan3ForJIO plan3 ={2599, 365, 2};
	printf("\n ---- Welcome to JIO Recharge Offer ---- \n\n");
	printf("Please choose your Plan\n\n");
	printf("************** \n");
	printf("1 -> For plan1\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per day\n\n\n", plan1.cost, plan1.days, plan1.data);
	printf("************** \n");
	printf("2 -> For plan2\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per day\n\n\n", plan2.cost, plan2.days, plan2.data);
	printf("************** \n");
	printf("3 -> For plan3\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per day\n\n", plan3.cost, plan3.days, plan3.data);
	int plan;
	scanf("%d",&plan);
	switch(plan)
	{	
		case 1:
			changeDetails(28);
			//printf("\nPlan 1 Recharged Successfully\n");
			break;
		case 2:
			changeDetails(84);
			//printf("\nPlan 2 Recharged Successfully\n");
			break;
		case 3:
			changeDetails(365);
			//printf("\nPlan 3 Recharged Successfully\n");
			break;
		default:
			printf("\nYou entered wrong key:(\n\n");
			exit(0);
	}
}