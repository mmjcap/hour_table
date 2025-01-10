#include <stdio.h>

int main() {
    int day;

    do {
        // Asks the user to insert a week day to show
        printf("\nInsert day of the week (1=Monday, 2=Tuesday, 3=Wednesday, 4=Thursday, 5=Friday, 6=Saturday, 0=Whole Week): ");
        scanf("%d", &day);

        // Shows the time table of the selected day
        switch (day) {
            case 1:
                printf("\nMonday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 2:
                printf("\nTuesday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 3:
                printf("\nWednesday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 4:
                printf("\nThursday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 5:
                printf("\nFriday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;

            /*case 6:
                printf("\nSaturday:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                printf("7) -\n");
                printf("8) -\n");
                break;
            */
                
            case 0:
            	printf("Monday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Tuesday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Wednesday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Thursday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Friday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
              /*printf("Saturday:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");*/
                
            	break;
            	
            default:
                printf("The day is not valid\n");
                continue;
        }

        // Asks the user if he wants to visualize another day
        char response;
        printf("\nDo you want to visualize another day? (y/n): ");
        scanf(" %c", &response);

        if (response != 'y' && response != 'Y') {
            break;
        }
    } while (1);

    return 0;
}
