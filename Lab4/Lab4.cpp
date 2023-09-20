// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printMenu()
{
    cout << "Please select which operation to perform: " << endl;
    cout << "\t1: Factorial" << endl;
    cout << "\t2: Arithmetic Series" << endl;
    cout << "\t3: Geometric Series" << endl;
    cout << "\t4: Exit" << endl;
    cout << "Your selection: ";
}   

void factorial()
{
    int factor;
    int result;
    
    cout << "What factor would you like? ";
    cin >> factor;


}

void arithmetic()
{

}

void geometric()
{

}

int main()
{
    int choice;
    char again;

    do {
        printMenu();
        cin >> choice;

        //Quit if the user chooses to exit, or an invalid choice.
        if (choice > 3 || choice < 1) {
            return 0;
        }
        
        else if (choice == 1)
        {
            factorial();
        }
        else if (choice == 2)
        {
            arithmetic();
        }
        else if (choice == 3)
        {
            geometric();
        }

        cout << "Go again? [Y/N]";
        cin >> again;
    } while (again == 'Y' || again == 'y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
