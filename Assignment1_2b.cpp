//Using Class
#include <iostream> //header file 
using namespace std;  //namespace

//Global Structure 
class Date  
{
    //data members->default private
    private:

    int date; //4bytes
    int month; //4 bytes
    int year; //4 bytes

//Member Functions
    public:
    void initDate(struct Date *ptrDate);
    void acceptDateOnConsole(struct Date *ptrDate);
    void printDateOnConsole(struct Date *ptrDate);
    bool isleapyear(struct Date *ptrDate);
};

//void initDate(struct Date *ptrDate);
void Date :: initDate(struct Date *ptrDate)
{
   ptrDate->date=10;
   ptrDate->month=03;
   ptrDate->year=2026;
}
// leap year
bool Date :: isleapyear(struct Date *ptrDate) 
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
void Date :: acceptDateOnConsole(struct Date *ptrDate)
{
    cout << "Enter the date : "<<endl;
    cin >> ptrDate->date;
    cout << "Enter the Month : "<<endl;
    cin >> ptrDate->month;
    cout << "Enter the year : "<<endl;
    cin >> ptrDate->year;
}

//void printDateOnConsole(struct Date* ptrDate); 
void Date :: printDateOnConsole(struct Date *ptrDate)
{
    cout<<"Date : "<< ptrDate->date <<"-" << ptrDate->month << "-" << ptrDate->year <<endl;
}

//List
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

//Main Function Entry point
int main()
{
    int choice;
    class Date d;
    while((choice = menuList()) != 0)
    {
        switch(choice)
        { 
            case 1: 
                d.acceptDateOnConsole(&d);
                break;
            case 2:
                d.printDateOnConsole(&d);
                break;
            case 3: 
                if(d.isleapyear(&d)) cout << "This is Leap Year"<<endl;
                else cout << "This is NOT Leap Year"<<endl;
            default:
                d.initDate(&d);
                break;
        }
    }
    return 0;
}
