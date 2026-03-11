/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values*/
#include<iostream>
using namespace std;
class Volume
{
    int length;
    int width;
    int height;
public:
    Volume() //parameterless constructor
    {
        cout<<"Default Constructor Called"<<endl;
        length=1;
        width=1;
        height=1;
    }
    Volume(int value)//single constructor
    {
        cout<<"Single Parameter Constructor Called"<<endl;
        length=value;
        width=value;
        height=value;
    }
    Volume(int l,int w,int h)//parameterized(with 3 parameters) c
    {
        cout<<"Three Parameter Constructor Called"<<endl;
        length=l;
        width=w;
        height=h;
    }
    int calculateVolume()
    {
        return length*width*height;
    }
    void printRecord()
    {
        cout<<"Lenght : "<<length<<endl;
        cout<<"Width : "<<width<<endl;
        cout<<"Height : "<<height<<endl;
        cout<<"Volume: "<<calculateVolume()<<endl;
    }   
};
int main()
{
   int choice;
choice = -1;
while(choice != 0)
{
    cout<<"\n---MENU---\n"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1. Calculate Volume with default values"<<endl;
    cout<<"2. Calculate Volume with same lenght, width and height"<<endl;
    cout<<"3. Calculate Volume with different lenght, width and height"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            Volume v1;
            v1.printRecord();
            break;
        }
        case 2:
        {
            int value;
            cout<<"Enter value : ";
            cin>>value;
            Volume v2(value);
            v2.printRecord();
            break;
        }
        case 3:
        {
            int l,w,h;
            cout<<"Enter lenght width height : ";
            cin>>l>>w>>h;
            Volume v3(l,w,h);
            v3.printRecord();
            break;
        }
        case 0:
            cout<<"Exiting program..."<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}
return 0;
}