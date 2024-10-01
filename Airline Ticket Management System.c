#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int c,p;
	int i;
	int j;
	int s[10]={};
	printf("**Welcome to Airline Management System**\n\n");
	for (j=0; j<10; j++)
	{
		printf("Choose 1 for First Class and 2 for Economic class\t");
		scanf("%i",&c);

		switch(c)
		{
		case 1:
			printf("\nFirst class\n");
			printf("Seats available are 1,2,3,4,5.\n");
			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&p);
                s[j]=p;

			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\n THIS SEAT IS TAKEN.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] <= 5)
                {
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Class: First class\n");
                    printf("Seat no : %i\n",s[j]);
                    printf("--------------------------\n\n");
                }
                else
                printf("\n WRONG KEYWORD! NO SEATS AVAILABLE!\n\n");
            break;
		case 2:
			printf("\nEconomical class\n");
			printf("Seats available are 6,7,8,9,10.\n");
			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&p);
                s[j]=p;
                //system("cls");
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\N THIS SEAT IS TAKEN.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] >= 6)
                {
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Class: Economical class\n");
                    printf("Seat no : %i\n",s[j]);
                    printf("--------------------------\n\n");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        default:
                break;
        }//endS WITH  swITCH CASE
    }//end counting people*/
	return 0;
}
