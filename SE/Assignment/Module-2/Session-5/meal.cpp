#include<stdio.h>
main()
{
   int choice;
   printf("\nWelcome to meal suggestion bot.");
   printf("\nChoose your meal type: ");
   printf("\n1. Breakfast");
   printf("\n2. Lunch");
   printf("\n4. Dinner");
   
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   		printf("\nPoha, juice, cereal");
   		break;
   	case 2:
   	    printf("\nDaal-Chawaal, roti-sabzi, sandwich");
   	    break;
   	case 4:
   		printf("\nbarbeque, sabzi-roti, protien bowl");
   		break;
   	default:
   		printf("\nInvalid choice");
   }

}
