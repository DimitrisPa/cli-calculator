#include <iostream>
using namespace std;

int main()
{
    // Welcome Screen

    cout << "Welcome to the CLI Calculator\n\n";
    string choice;

    do
    {

        // User selection

        cout << "Select value \n1) +\n2) -\n3) *\n4) /\n5) x (Exit)\n\n";
        char input;
        cout << "Value : ";
        cin >> input;
        cout << "\n";

        // Exit the application

        if (input == 'x')
        {
            exit(EXIT_FAILURE);
            ;
        }
        else
        {

            // User entry

            double x1, x2;
            cout << "Please enter two numbers : ";
            cin >> x1 >> x2;
            cout << "\n";

            switch (input)
            {

                // Addition

            case '+':
                cout << "The result is : " << x1 << " + " << x2 << " = " << x1 + x2 << "\n\n";
                break;

                // Subtraction

            case '-':
                cout << "The result is : " << x1 << " - " << x2 << " = " << x1 - x2 << "\n\n";
                break;

                // Multiplication

            case '*':
                cout << "The result is : " << x1 << " * " << x2 << " = " << x1 * x2 << "\n\n";
                break;

                // Division

            case '/':
                cout << "The result is : " << x1 << " / " << x2 << " = " << x1 / x2 << "\n\n";
                break;

                // Wrong input

            default:
                cout << "Wrong value\n"
                     << "\n";
                break;
            }
        }

        // Allow the user to choose to restart the application

        cout << "Do you want to use the calculator again? [Yes/No] : ";
        cin >> choice;
        cout << "\n";

    } while (choice == "Yes" || choice == "yes" || choice == "y");

    return 0;
}
