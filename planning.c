//Sophia Hostetler
//U27264415
//This program will calculate and print the charge for a selected location, the duration, and food (based on the number of people attending)


#include<stdio.h>

int main(void)
{
	int selection;
	int hours;
	int people;
	int charge;

	printf("Please select from the following menu: 1. Holiday House, 2. Fun Center, 3. Party Plaza\n");
	
//Prompting user to select from the options listed

	printf("Enter location selection: ");
		scanf("%d", &selection);

//If statement to ensure the selection is one of the listed options

	if(selection>3||selection<1)
		printf("Invalid selection.");
	else

//switch statement to seperate each selection

	  switch(selection)
        {
                case 1:
		        printf("Enter hours: ");
			scanf("%d", &hours);

//If statement to ensure the hours selected are within range

			if(hours>10||hours<1)
         	       	{
				printf("Invalid selection.");
				break;	
			}
			else
		        	printf("Enter number of people: ");
               			scanf("%d", &people);

//If statment to ensure the people entered is within range
             	 
			if(people<1 || people>200)
			{
				printf("Invalid selection. Reached maximum capacity.");
	  			break;
			}

//If statement to ensure charge does not exceed maximum daily room limit
	
			if(400+(200*(hours-1))>1800)
				charge=1800+(10*people);
			else
				charge=400+(200*(hours-1))+(10*people);
				printf("Charge($): %d", charge);
                        	break;
                case 2:
			printf("Enter hours: ");
               		scanf("%d", &hours);

//If statement to ensure the hours are within range
        
			if(hours>10||hours<1)
			{
               			 printf("Invalid selection.");
      				 break;
			}
			else
       				printf("Enter number of people: ");
               			scanf("%d", &people);

//If statement to ensure the people entered is within range
    
		  	if(people<1 || people>100)
        		{
               			printf("Invalid selection. Reached maximum capacity.");
				break;
			}

//If statement to ensure charge does not exceed maximum daily room limit

			if(300+(150*(hours-1))>1300)
				charge=1300+(20*people);
			else	        
			        charge=300+(150*(hours-1))+(20*people);
                	        printf("Charge($): %d", charge);
                	        break;

                case 3:
			printf("Enter hours: ");
                	scanf("%d", &hours);

//If statement to make sure hours are within range
      
			if(hours>10||hours<1)
        		{
	      			printf("Invalid selection.");
       				break;
			}
	 		else
       				printf("Enter number of people: ");
                		scanf("%d", &people);

//If statement to make sure people entered is within range
	
			if(people<1 || people>150)
         		{
	               		printf("Invalid selection. Reached maximum capacity.");
				break;
			}

//If statement to ensure charge does not exceed amximum daily room limit                       

			if(250+(120*(hours-1))>800)
				charge=800+(15*people);
			else
				charge=250+(120*(hours-1))+(15*people);
                	        printf("Charge($): %d", charge);
                	        break;

                default:
                        printf("Invalid selection. Choose a selection of 1-3.");
                        break;
		        }

	

return 0;
}
