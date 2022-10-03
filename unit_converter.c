#include <stdio.h>

int main()
{
	char category;
	int tempchoice;
	int currencychoice;
	int masschoice;
	int usr_in_fahr; // fahreinheit entered by user;
	int usr_in_cel; // celsius entered by user;
	int usr_in_usd_to_euro; // user inputted for USD to EURO;
	int usr_in_usd_to_jpy; // user inputted for USD to JPY;
	int usr_in_usd_to_rmb; // user inputted for USD to RMB;
	int usr_in_oun; //user inputted for ounce;
	int usr_in_grm; //user inputted for Gram;
	int fahr_to_cel; // variable to store coverted celcius.
	int cel_to_fahr; // variable to store converted fahrenheit.
	float usd_to_euro; // var to store converted EURO.
	float usd_to_jpy; // var to store converted JPS.
	float usd_to_rmb; // var to store coverted RMB.
	float oun_to_poun;// var to store converted pounds from ounce.
	float grm_to_poun; // var store converted pounds from grams.
	int x = 1;
	int y = 1;
	home:
	while(y != 0)
	{
		
	
		printf("\t\twelcome to unit converter! \n");
		printf("\t----------------------------------------------- \n");
		printf("Temperature(T),currency(C),mass(M),quit(Q) \n");
		printf("please enter the letter you want to convert. \n");
		scanf("%c",&category);
		fgetc(stdin);
		
		 if(category == 'T')
		{
			while(x != 0)
			{
				printf("\t\twlcome to Temperature converter! \n");
				printf("-------------------------------------- \n");
				printf("Enter 1 for fahrenheit to celsius. \n");
				printf("Enter 2 for celsius to fahrenheit. \n");
				printf("Enter 3 to go back to main page. \n");
				scanf("%d",&tempchoice);
				fgetc(stdin);
	
				if(tempchoice == 1)
				{
					printf("please enter the fahrenheit degree: \n");
					scanf("%d",&usr_in_fahr);
					fgetc(stdin);
					fahr_to_cel = ((usr_in_fahr - 32) * ( 5.0 / 9.0));
					printf("fahrenheit: %d",fahr_to_cel);
				}
				else if(tempchoice == 2)
				{
					printf("please enter the celcius degree: \n");
		
					scanf("%d",&usr_in_cel);
					fgetc(stdin);
					cel_to_fahr = ((9.0 / 5.0) * usr_in_cel + 32);				
					printf("Fahrenheit: %d", cel_to_fahr);
				}
				else if (tempchoice == 3)
				{
					break;
	
				}
				else
					printf("please enter the correct choice. \n");
				printf("\nto continue enter any number to exit enter 0: ");
				scanf("%d",&x);
				fgetc(stdin);
			}
	
		}
	
		else if(category == 'C')
		{
			while(x != 0)
			{
				printf("\t\twelcome to currency converter! \n");
				printf("---------------------------------------\n");
				printf("Enter 1 for USD to EURO. \n");
				printf("Enter 2 for USD to JPY. \n");
				printf("Enter 3 for USD to RMB. \n");
				printf("Enter 4 to go back home page.\n");
				scanf("%d",&currencychoice);
				fgetc(stdin);
	
				if(currencychoice == 1)
				{
					printf("please ennter the USD amount: \n");
					scanf("%d",&usr_in_usd_to_euro);
					usd_to_euro = usr_in_usd_to_euro * 0.87;
					printf("EURO: %.3f",usd_to_euro);
	
				}
				else if(currencychoice == 2)
				{
					printf("please enter the USD amount: \n");
					scanf("%d", &usr_in_usd_to_jpy);
					usd_to_jpy = usr_in_usd_to_jpy * 111.09;
					printf("JPY: %.2f",usd_to_jpy);
		
				}
				else if(currencychoice == 3)
				{
					printf("please enter the USD amount: \n");
					scanf("%d",&usr_in_usd_to_rmb);
					usd_to_rmb = usr_in_usd_to_rmb * 6.82;
					printf("RMB: %.2f", usd_to_rmb);
				}
				else if(currencychoice == 4)
				{
					goto home;
				}
				else
					printf("please enter valid choice. \n");
			}
		}
		else if (category == 'M')
		{
			printf("welcome to mass converter! \n");
			printf("-------------------------------------------\n");
			printf("Enter 1 for ounces to pounds. \n");
			printf("Enter 2 for gram to pounds. \n");
			printf("Enter 3 to go back to main page");
			scanf("%d", &masschoice);
			fgetc(stdin);
			if(masschoice == 1)
			{
				printf("please enter the ounce amunt: \n");
				scanf("%d",&usr_in_oun);
				oun_to_poun = usr_in_oun * 0.0625;
				printf("Pounds: %.2f",oun_to_poun);

			}
			else if (masschoice == 2)
			{
				printf("pease enter the gram amount: \n");
				scanf("%d", &usr_in_grm);
				grm_to_poun = usr_in_grm * 0.00220462;
				printf("Pounds: %.2f",grm_to_poun);
			}
			else if (masschoice ==3)
				break;
			else
				printf("Please enter the correct choice. \n");
				
		}
		 else if (category == 'Q')
			 break;
		 else
			 printf("please enter the correct choice. \n");
			 
		y++;
	} 

	return (0);
}
