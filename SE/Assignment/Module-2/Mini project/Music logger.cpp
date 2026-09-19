#include <stdio.h>

main()
{
    int minutes[7]={0};
    int choice=0,i;
    int total,highest,count,value;
    float average;
    char ch;
    FILE *fp;

    while(choice!=5)
    {
        printf("\n\nMusic Listening Logger");
        printf("\n1. Enter Weekly Minutes");
        printf("\n2. View Summary");
        printf("\n3. Read Report From File");
        printf("\n4. Reset Data");
        printf("\n5. Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                fp=fopen("music_log.txt","w");

                if(fp==NULL)
                {
                    printf("\nFile Cannot Open");
                    break;
                }

                printf("\nEnter Music Minutes\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d : ",i+1);
                    scanf("%d",&minutes[i]);

                    fprintf(fp,"%d\n",minutes[i]);
                }

                fclose(fp);

                printf("\nData Saved");
                break;

            case 2:

                total=0;
                highest=minutes[0];

                printf("\nWeekly Summary\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d = %d Minutes\n",i+1,minutes[i]);

                    total=total+minutes[i];

                    if(minutes[i]>highest)
                    {
                        highest=minutes[i];
                    }
                }

                average=(float)total/7;

                printf("\nTotal = %d",total);
                printf("\nAverage = %.2f",average);
                printf("\nHighest = %d",highest);

                break;

            case 3:

                fp=fopen("music_log.txt","r");

                if(fp==NULL)
                {
                    printf("\nNo File Found");
                    break;
                }

                total=0;
                highest=0;
                count=0;

                while(fscanf(fp,"%d",&value)==1)
                {
                    total=total+value;

                    if(value>highest)
                    {
                        highest=value;
                    }

                    count++;
                }

                fclose(fp);

                if(count>0)
                {
                    average=(float)total/count;

                    printf("\nReport");
                    printf("\nTotal = %d",total);
                    printf("\nAverage = %.2f",average);
                    printf("\nHighest = %d",highest);
                }

                break;

            case 4:

                printf("\nReset All Data? (Y/N): ");
                scanf(" %c",&ch);

                if(ch=='Y' || ch=='y')
                {
                    for(i=0;i<7;i++)
                    {
                        minutes[i]=0;
                    }

                    fp=fopen("music_log.txt","w");

                    if(fp!=NULL)
                    {
                        fclose(fp);
                    }

                    printf("\nData Reset");
                }
                else
                {
                    printf("\nReset Cancelled");
                }

                break;

            case 5:

                printf("\nProgram Closed");
                break;

            default:

                printf("\nInvalid Choice");
        }
    }
}
