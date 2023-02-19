// Chapter 4 A Vector of Names Assignment

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

using namespace std;

int playerChoice;

int main ()
{
        while (playerChoice != 5)
    {
        
    cout << "This week's homework:\n";
    vector<string>names;
    vector<string>::iterator changeIter;
    vector<string>::const_iterator readIter;
    string userInput;
    string nameAdd;
    string nameChange;
    string newName;
    string nameRemove;

    names.push_back("Science");
    names.push_back("Math");
    names.push_back("English");

    for (unsigned int i = 0; i < names.size(); ++i)
    {
        cout << names[i] << endl;
    }

    cout << "\nHello, Player. Here are your options:\n";
    cout << "\n[1] Add a name\n";
    cout << "[2] Change a name\n";
    cout << "[3] Remove a name\n";
    cout << "[4] List all names\n";
    cout << "[5] Quit\n";

    cout << "\nWhat would you like to do? Type only a single number.\n\n";
    cin >> playerChoice;

    if (playerChoice == 1)
    {
        cout << "\nYou've chosen to add a name. Please type the name you'd like to be added.\n";
        cin >> nameAdd;

        names.push_back(nameAdd);

        cout << "\nHere's an updated list of names:\n";
        for (unsigned int i = 0; i < names.size(); ++i )
        {
            cout << names[i] << endl;
        }
    }

    else if (playerChoice == 2)
    {
        cout << "\nYou've chosen to change a name. Please tell me which name you'd like to change.\n";
        cin >> nameChange;

        changeIter = find(names.begin(), names.end(), nameChange);
        if (changeIter != names.end())
        {
            cout << "\nFound it. What are we changing it to?\n";
            cin >> newName;
            *changeIter = newName;
        }
        else
        {
            cout << "\nI didn't find that name.\n";
        }

        cout << "\nHere's an updated list of names:\n";
        for (unsigned int i = 0; i < names.size(); ++i)
        {
            cout << names[i] << endl;
        }
    }

    else if (playerChoice == 3)
    {
        cout << "\nYou've chosen to remove a name. Please tell me which name you'd like to remove.\n";
        cin >> nameRemove;

        changeIter = find(names.begin(), names.end(), nameRemove);
        if (changeIter != names.end())
        {
            cout << "\nFound it. I'll go ahead and remove it now.\n";
            names.erase(changeIter);
        }
        else 
        {
            cout << "\nI didn't find that name.\n";
        }

        cout << "\nHere's an updated list of names:\n";
        for (unsigned int i = 0; i < names.size(); ++i)
        {
            cout << names[i] << endl;
        }
    }

    else if (playerChoice == 4)
    {
        cout << "\nYou've chosen to list all names.\n";
        sort(names.begin(), names.end());
        for (readIter = names.begin(); readIter != names.end(); ++readIter)
        {
            cout << *readIter << endl;
        }
    }

    else if (playerChoice == 5)
    {
        cout << "\nGoodbye.\n";
        cout << "\nThanks for playing.\n";
    }

    else
    {
        cout << "\nThat's not one of the options!\n";
    }
}
    return 0;

}