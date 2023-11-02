#include<stdio.h>

int main(){
    
    int flights[5][5]={
        {1,1,300,0,0},
        {2,1,329,1,310},
        {3,0,0,1,280},
        {4,1,380,0,0},
        {5,1,375,1,400},
    };
    int flag=0,i,j,maxPriceEvening=0,maxPriceMorning=0,minPriceMorning=999999,minPriceEvening=999999,option,optionsp;
    const char* day=NULL;const char* highestEday=NULL;const char* highestMday=NULL;const char* lowestMday=NULL;const char* lowestEday=NULL;
    for (i = 0; i < 5; i++)
    {
        if (flights[i][1]==1)
        {   
            if (minPriceMorning > flights[i][2])
            {
                minPriceMorning = flights[i][2];
                switch (i)
                {
                case 0:
                    lowestMday = "MONDAY";
                    break;
                case 1:
                    lowestMday = "TUESDAY";
                    break;
                case 2:
                    lowestMday = "WEDNESDAY";
                    break;
                case 3:
                    lowestMday = "THURSDAY";
                    break;
                case 4:
                    lowestMday = "FRIDAY";
                    break;
                default:
                    break;
                }
            }
            if (maxPriceMorning < flights[i][2])
            {
                maxPriceMorning = flights[i][2];
                switch (i)
                {
                case 0:
                    highestMday = "MONDAY";
                    break;
                case 1:
                    highestMday = "TUESDAY";
                    break;
                case 2:
                    highestMday = "WEDNESDAY";
                    break;
                case 3:
                    highestMday = "THURSDAY";
                    break;
                case 4:
                    highestMday = "FRIDAY";
                    break;
                default:
                    break;
                }
            }
        }
        
        if (flights[i][3]==1)
        {
            if (minPriceEvening > flights[i][4])
            {
                minPriceEvening = flights[i][4];
                switch (i)
                {
                case 0:
                    lowestEday = "MONDAY";
                    break;
                case 1:
                    lowestEday = "TUESDAY";
                    break;
                case 2:
                    lowestEday = "WEDNESDAY";
                    break;
                case 3:
                    lowestEday = "THURSDAY";
                    break;
                case 4:
                    lowestEday = "FRIDAY";
                    break;
                default:
                    break;
                }
            }            
            if (maxPriceEvening < flights[i][4])
            {
                maxPriceEvening = flights[i][4];

                switch (i)
                {
                case 0:
                    highestEday = "MONDAY";
                    break;
                case 1:
                    highestEday = "TUESDAY";
                    break;
                case 2:
                    highestEday = "WEDNESDAY";
                    break;
                case 3:
                    highestEday = "THURSDAY";
                    break;
                case 4:
                    highestEday = "FRIDAY";
                    break;
                default:
                    break;
                }
            }
        }        
    }
    
    while (flag==0)
    {
        printf("FLIGHTS DETAIL\nCHOOSE OPTION NUMBER FROM THE FOLLOWING\n\n1.FOR CHECKING HIGHEST CHANCE OF BOOKING\n2.FOR MORNING FLIGHTS DETAIL\n3.FOR EVENING FLIGHTS DETAILS\n4.FOR SPECFIC DAY DETAILS\n5.EXIT\n");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("HIGHEST CHANCE OF BOOKING\n\n**IN MORNING**\nDAY: %s\tPRICE: %d\n**IN EVENING**\nDAY: %s\tPRICE: %d\n",highestMday,maxPriceMorning,highestEday,maxPriceEvening);
            break;
        case 2:
            printf("MORNING FLIGHTS AVAILABILITY DETAILS\n\n");
            for (i = 0; i < 5; i++)
            {
                switch (i)
                {
                case 0:
                    day = "MONDAY";
                    break;
                case 1:
                    day = "TUESDAY";
                    break;
                case 2:
                    day = "WEDNESDAY";
                    break;
                case 3:
                    day = "THURSDAY";
                    break;
                case 4:
                    day = "FRIDAY";
                    break;
                default:
                    break;
                }
                if (flights[i][1]==1)
                {
                    printf("DAY: %s\tPRICE: %d\n",day,flights[i][2]);
                }    
            }
            printf("\n**BEST OPTION WOULD BE**\nDAY: %s\tPRICE: %d\n",lowestMday,minPriceMorning);
            break;
        case 3:
            printf("EVENING FLIGHTS AVAILABILITY DETAILS\n\n");
            for (i = 0; i < 5; i++)
            {
                switch (i)
                {
                case 0:
                    day = "MONDAY";
                    break;
                case 1:
                    day = "TUESDAY";
                    break;
                case 2:
                    day = "WEDNESDAY";
                    break;
                case 3:
                    day = "THURSDAY";
                    break;
                case 4:
                    day = "FRIDAY";
                    break;
                default:
                    break;
                }
                if (flights[i][3]==1)
                {
                    printf("DAY: %s\tPRICE: %d\n",day,flights[i][4]);
                }    
            }
            printf("\n**BEST OPTION WOULD BE**\nDAY: %s\tPRICE: %d\n",lowestEday,minPriceEvening);
            break;
        case 4: 
            printf("CHOOSE THE DAY\n1.MONDAY\n2.TUESDAY\n3.WEDNESDAY\n4.THURSDAY\n5.FRIDAY\n");
            scanf("%d",&optionsp);
            switch (optionsp)
            {
            case 1:
                printf("ON MONDAY AVAILABLE FLIGHTS AND THEIR PRICES ARE\n");
                if(flights[0][1]==1){
                    printf("**MORNING**\nPRICE: %d\n",flights[0][2]);
                }
                if(flights[0][3]==1){
                    printf("**EVENING**\nPRICE: %d\n",flights[0][4]);
                }
                break;
            case 2:
                printf("ON TUESDAY AVAILABLE FLIGHTS AND THEIR PRICES ARE\n");
                if(flights[1][1]==1){
                    printf("**MORNING**\nPRICE: %d\n",flights[1][2]);
                }
                if(flights[1][3]==1){
                    printf("**EVENING**\nPRICE: %d\n",flights[1][4]);
                }
                break;
            case 3:
                printf("ON WEDNESDAY AVAILABLE FLIGHTS AND THEIR PRICES ARE\n");
                if(flights[2][1]==1){
                    printf("**MORNING**\nPRICE: %d\n",flights[2][2]);
                }
                if(flights[2][3]==1){
                    printf("**EVENING**\nPRICE: %d\n",flights[2][4]);
                }
                break;
            case 4:
                printf("ON THURSDAY AVAILABLE FLIGHTS AND THEIR PRICES ARE\n");
                if(flights[3][1]==1){
                    printf("**MORNING**\nPRICE: %d\n",flights[3][2]);
                }
                if(flights[3][3]==1){
                    printf("**EVENING**\nPRICE: %d\n",flights[3][4]);
                }
                break;
            case 5:
                printf("ON FRIDAY AVAILABLE FLIGHTS AND THEIR PRICES ARE\n");
                if(flights[4][1]==1){
                    printf("**MORNING**\nPRICE: %d\n",flights[4][2]);
                }
                if(flights[4][3]==1){
                    printf("**EVENING**\nPRICE: %d\n",flights[4][4]);
                }
                break;
            default:
                printf("INVALID OPTION\n\n");
                break;
            }
            break;
        case 5:
            printf("EXITING PROGRAM");
            flag=1;
            break;
        default:
            printf("INVALID OPTION\n\n");
            break;
        }
    }    
       return 0;
}
