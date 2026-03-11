/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/

#include<iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int totalCars;
    unsigned int payingCars;
    unsigned int nonPayingCars;
    double totalAmount;
    public:
    Tollbooth() // parameterless constructor
    {
        totalCars = 0;
        payingCars = 0;
        nonPayingCars = 0;
        totalAmount = 0;
    }
    void payCars()
    {
        totalCars++;
        totalAmount += 0.50;
        payingCars++;
    }
    void nonPayCars()
    {
        totalCars++;
        nonPayingCars++;
    }
    void printOnconsole(void)
    {
        cout << "\nTotal Cars: " << totalCars << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non Paying Cars: " << nonPayingCars << endl;
        cout << "Total Amount Collected: " << totalAmount << endl;
    }
    void menuList()
    {
        cout << "0.Exit" << endl;
        cout << "1.PayCars" << endl;
        cout << "2.NonPayCar" << endl;
        cout << "3.Display Record" << endl;
    }
};
int main()
{
    Tollbooth t;
    int choice;
while (choice != 0)
{
    t.menuList();
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
        case 0:
            cout << "Exiting Program\n";
            break;
        case 1:
            t.payCars();
            break;

        case 2:
            t.nonPayCars();
            break;

        case 3:
            t.printOnconsole();
            break;

        default:
            cout << "Invalid choice" << endl;
    }
}
return 0;
}