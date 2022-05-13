#include <iostream>
using namespace std;

int main()
{
    //Select screen
    cout<<"Welcome to the CLI Calculator\n"<<"\n";
    cout<<"Select value (Numbers ONLY)\n1) +\n2) -\n3) *\n4) /\n5) Exit\n"<<"\n";

    //User input
    int input;
    cout<<"Value : ";
    cin>>input;
    cout<<"\n";

    //Addition
    if (input == 1)
    {
        double x1,x2;
        cout<<"Please insert your two numbers : ";
        cin >> x1;
        cin >> x2;
        if(!cin)
        {
            cout<<"Insert only numbers!\n";
        }
        else
        {   
        cout<<"\n";
        double output = x1 + x2;
        cout<<"Result is : "<< x1 <<" + "<< x2 <<" = "<<output<<endl;
        }
    }
    //Subtraction
    else if (input == 2)
    {
        double x1,x2;
        cout<<"Please insert your two numbers : ";
        cin>>x1;
        cin>>x2;
        if(!cin)
        {
            cout<<"Insert only numbers!\n";
        }
        else
        {
        double output = x1 - x2;
        cout<<"Result is : "<< x1 <<" - "<< x2 <<" = "<<output<<endl;
        }
    }
    //Multiplication
    else if (input == 3)
    {
        double x1,x2;
        cout<<"Please insert your two numbers : ";
        cin>>x1;
        cin>>x2;
        if(!cin)
        {
            cout<<"Insert only numbers!\n";
        }
        else
        {
        double output = x1 * x2;
        cout<<"Result is : "<< x1 <<" * "<< x2 <<" = "<<output<<endl;
        }
    }
    //Division
    else if (input == 4)
    {
        double x1,x2;
        cout<<"Please insert your two numbers : ";
        cin>>x1;
        cin>>x2;
        if(!cin)
        {
            cout<<"Insert only numbers!\n";
        }
        else if (x1 == 0 || x2 == 0)
        {
            cout<<"Division by 0\n";
        }
        else
        {
        double output = x1 / x2;
        cout<<"Result is : "<< x1 <<" / "<< x2 <<" = "<<output<<endl;
        }
    }
    //Close app
    else if (input == 5)
    {
        cout<<"Close app";
        exit;
    }
    //Wrong input
    else
    {
        cout<<"Wrong number";
    }

    return 0;
}