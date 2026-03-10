/* Q2. Write a menu driven program for Date in a CPP language using structure and also using class. 
Date is having data members day, month, year. Implement the following functions. 
void initDate(); 
void printDateOnConsole(); 
void acceptDateFromConsole(); 
bool isLeapYear();
*/

// Using Structure
#include <iostream> //header file
using namespace std; //namespace

//Global Structure 
struct Date  
{
    //data members
    int date; //4bytes
    int month; //4 bytes
    int year; //4 bytes
};

//void initDate(struct Date *ptrDate);
void initDate(struct Date *ptrDate)
{
   ptrDate->date=10;
   ptrDate->month=03;
   ptrDate->year=2026;
}

// leap year
bool isleapyear(struct Date *ptrDate) 
{
    if ((ptrDate->year % 4 == 0 && ptrDate->year % 100 != 0) || (ptrDate->year % 400 == 0)) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

//void printDateOnConsole(struct Date* ptrDate);
void acceptDateOnConsole(struct Date *ptrDate)
{
    cout << "Enter the date : "<<endl;
    cin >> ptrDate->date;
    cout << "Enter the Month : "<<endl;
    cin >> ptrDate->month;
    cout << "Enter the year : "<<endl;
    cin >> ptrDate->year;
}

//void printDateOnConsole(struct Date* ptrDate); 
void printDateOnConsole(struct Date *ptrDate)
{
    cout<<"Date : "<< ptrDate->date <<"-" << ptrDate->month << "-" << ptrDate->year <<endl;
}
//menulist
int menuList(void)
{
    int choice;

    cout << "0.Exit" << endl;
    cout << "1.acceptDate." << endl;
    cout << "2.printDate." << endl;
    cout << "3.Leap Year." << endl;
    cout << "Enter the choice : "<< endl;
    cin >> choice;
    return choice;
}

//main function
int main()
{
    int choice;
    struct Date d;
    //while loop
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
            case 3: 
                if(isleapyear(&d)) cout << "This is Leap Year"<<endl;
                else cout << "This is NOT Leap Year"<<endl;
            default:
                initDate(&d);
                break;
        }
    }
    return 0;
}