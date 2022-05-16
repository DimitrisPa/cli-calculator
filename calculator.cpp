#include <iostream>
using namespace std;

int main()
{
    string choice;
    do{
    //Welcome Screen
    cout<<"Welcome to the CLI Calculator\n"<<"\n";
    cout<<"Select value \n1) +\n2) -\n3) *\n4) /\n5) x (Exit)\n"<<"\n";

    //User choice
    char input;
    cout<<"Value : ";
    cin>>input;
    cout<<"\n";

    //Terminate the app
    if (input == 'x')
    {
        exit (EXIT_FAILURE);;
    }else
    {
    //User numbers
    double x1,x2;
    cout<<"Please insert two numbers : ";
    cin >> x1 >> x2;
    cout<<"\n";

    switch(input)
    {
        //Addition
        case '+' :
            cout<<"Result is : "<< x1 <<" + "<< x2 <<" = "<< x1 + x2<<"\n\n";
        break;
        //Subtraction
        case '-' :
            cout<<"Result is : "<< x1 <<" - "<< x2 <<" = "<< x1 - x2<<"\n\n";
        break;
        //Multiplication
        case '*' :
            cout<<"Result is : "<< x1 <<" * "<< x2 <<" = "<< x1 * x2<<"\n\n";
        break;
        //Division
        case '/' :
            cout<<"Result is : "<< x1 <<" / "<< x2 <<" = "<< x1 / x2<<"\n\n";
        break;
        //Wrong input
        default :
            cout<<"Wrong value\n"<<"\n";
        break;

    }
    }
    //Give user the choice to restart the app
    cout<<"Would you like to use the calculator again? [Yes/No]\n";
    cin>>choice;

    }
    while(choice == "Yes" || choice == "yes" || choice == "y");

    return 0;
}
