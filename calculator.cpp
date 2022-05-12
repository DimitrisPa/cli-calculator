#include <iostream>

using namespace std;

int main()
{
    //Select screen
    cout<<"Welcome to the CLI Calculator\n";
    cout<<"\n";
    cout<<"Select value (Numbers ONLY) : \n";
    cout<<"1) +"<<endl;
    cout<<"2) -"<<endl;
    cout<<"3) *"<<endl;
    cout<<"4) /"<<endl;
    cout<<"5) Exit"<<endl;
    cout<<"\n";

    int input;
    cin>>input;
    cout<<"\n";
    //Prosthesh
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
        else{
        double output = x1 + x2;
        cout<<"Result is : "<< x1 <<" + "<< x2 <<" = "<<output<<endl;
        }
    }
    //Afairesh
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
        else{
        double output = x1 - x2;
        cout<<"Result is : "<< x1 <<" - "<< x2 <<" = "<<output<<endl;
        }
    }
    //Pollaplasiamos
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
        else{
        double output = x1 * x2;
        cout<<"Result is : "<< x1 <<" * "<< x2 <<" = "<<output<<endl;
        }
    }
    //Diairesh
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
    //H epilogh den yparxei
    else if (input == 5)
    {
        cout<<"Close app";
        exit;
    }
    else
    {
        cout<<"Wrong number";
    }

    return 0;
}
