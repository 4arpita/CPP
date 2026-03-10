/* Assignment 1 : Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members 
day, month, year. Implement the following functions. 
void initDate(struct Date* ptrDate); 
void printDateOnConsole(struct Date* ptrDate); 
void acceptDateFromConsole(struct Date* ptrDate); 
*/

#include <stdio.h> //Header file

//Global Structure 
struct Date
{
    //data members
    int day; //4bytes
    int month; //4 bytes
    int year; //4 bytes
};

//Global Functions
//void initDate(struct Date *ptrDate);
void initDate(struct Date *ptrDate)
{
   ptrDate->day=10;
   ptrDate->month=03;
   ptrDate->year=2026;
}
//void printDateOnConsole(struct Date* ptrDate);
void acceptDateOnConsole(struct Date *ptrDate)
{
    printf("Enter the date: ");
    scanf("%d", &ptrDate->day);
    printf("Enter the Month : ");
    scanf("%d", &ptrDate->month);
    printf("Enter the year : ");
    scanf("%d", &ptrDate->year);
}

//void printDateOnConsole(struct Date* ptrDate); 
void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date : %d-%d-%d\n",ptrDate->day, ptrDate->month, ptrDate->year);
   
}

int menuList(void)
{
    int choice;

    printf("0.Exit.\n");
    printf("1.acceptDate.\n");
    printf("2.printDate.\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    return choice;
}
//main function
int main()
{
    int choice;
    struct Date d;
    //While loop
    while((choice = menuList()) != 0)
    {
        //switch case
        switch(choice)
        { 
            case 1: 
                acceptDateOnConsole(&d);
                break;
            case 2:
                printDateOnConsole(&d);
                break;
            default: 
                initDate(&d);
                break;   
        }
    }
    return 0;
}