#include <iostream>
using namespace std;

int main()
{
    string username, password;
    string studentName = "", courseName = "";
    int studentAge = 0, choice;

    // Login system
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Wrong Login\n";
        }

        if (i == 3)
        {
            cout << "Program End\n";
            return 0;
        }
    }

    while (true)
    {
        cout << "\n1.Add Student\n2.View Student\n3.Add Course\n4.Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Name: ";
            cin >> studentName;
            cout << "Age: ";
            cin >> studentAge;
        }
        else if (choice == 2)
        {
            if (studentName != "")
            {
                cout << studentName << " " << studentAge << endl;
            }
            else
            {
                cout << "No Record\n";
            }
        }
        else if (choice == 3)
        {
            cout << "Course: ";
            cin >> courseName;
        }
        else if (choice == 4)
        {
            break;
        }
    }
}
