#include<stdio.h>

main()
{
	int choice;
	printf("1 January\n");
	printf("2 Fedruary\n");
	printf("3 March\n");
	printf("4 April\n");
	printf("5 May\n");
	printf("6 Jun\n");
	printf("7 July\n");
	printf("8 Auguht\n");
	printf("9 Septemar\n");
	printf("10 October\n");
	printf("11 November\n");
	printf("12 December\n");
	printf("Chose eny number of above=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			printf("January");
			break;
			
		case 2 :
			printf(" Fedruary");
			break;
			
		case 3 :
			printf(" March");
			break;
			
		case 4 :
			printf(" April");
			break;	
			
		case 5 :
			printf("  May");
			break;
			
		case 6 :
			printf("  Jun=");
			break;
			
		case 7 :
			printf("  Jun");
			break;
			
		case 8 :
			printf("  Auguht");
			break;
			
		case 9 :
			printf("  Septemar");
			break;
			
		case 10 :
			printf("  October=");
			break;
			
    	case 11 :
			printf("  November");
			break;
			
		case 12 :
			printf("  December=12");
			break;
			
    	default	:
		    printf("plz Enter valid choice");	
			
			
			
			
	}
}
