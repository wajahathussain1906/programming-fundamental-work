#include <iostream>
#include <conio.h>
using namespace std;

// ---------------- Function Prototypes ----------------

// Main Menus
void showMainMenu();
void adminMenu(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int &index);
void operatorMenu(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int &index);

// Admin Functions
void viewAllMobiles(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index);
void searchMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index);
void updateMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index);
void stockCheck(string mobileNameArray[], int stockArray[], int index);
void deleteMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index);
void sellMobile(string mobileNameArray[], int stockArray[], int soldArray[], int index);

// ---------------- Main Function ----------------

int main()
{
    int TOTAL_MOBILES = 100;
    int index = 5;

    string mobileNameArray[TOTAL_MOBILES] = {"Samsung", "iPhone", "Oppo", "Vivo", "Realme"};
    float priceArray[TOTAL_MOBILES] = {50000, 100000, 30000, 25000, 20000};
    int stockArray[TOTAL_MOBILES] = {10, 5, 15, 20, 25};
    int soldArray[TOTAL_MOBILES] = {0, 0, 0, 0, 0};

    while (true)
    {
        system("cls");
        showMainMenu();

        string UserOption;
        cin >> UserOption;

        if (UserOption == "1")
        {
            adminMenu(mobileNameArray, priceArray, stockArray, soldArray, index);
        }
        else if (UserOption == "2")
        {
            operatorMenu(mobileNameArray, priceArray, stockArray, soldArray, index);
        }
        else if (UserOption == "3")
        {
            break;
        }
        else
        {
            cout << "Wrong Option!" << endl;
            getch();
        }
    }

    cout << "Thanks for using this software" << endl;
}

// ---------------- Function Bodies ----------------

void showMainMenu()
{
    cout << "|--------------------------------------|" << endl;
    cout << "|----Mobile Shop Management System-----|" << endl;
    cout << "|--------------------------------------|" << endl;

    cout << "1 Admin" << endl;
    cout << "2 Operator" << endl;
    cout << "3 Exit" << endl;
    cout << "Choose option: ";
}

void adminMenu(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int &index)
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");

        string username, password;

        cout << "Admin Login Attempt " << i + 1 << endl;

        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "wajahat" && password == "1906")
        {
            while (true)
            {
                system("cls");

                cout << "1 View All Mobiles" << endl;
                cout << "2 Search Mobile" << endl;
                cout << "3 Update Mobile" << endl;
                cout << "4 Stock Check" << endl;
                cout << "5 Delete Mobile" << endl;
                cout << "6 Sell Mobile" << endl;
                cout << "7 Logout" << endl;

                string option;
                cin >> option;

                if (option == "1")
                {
                    viewAllMobiles(mobileNameArray, priceArray, stockArray, soldArray, index);
                }
                else if (option == "2")
                {
                    searchMobile(mobileNameArray, priceArray, stockArray, soldArray, index);
                }
                else if (option == "3")
                {
                    updateMobile(mobileNameArray, priceArray, stockArray, soldArray, index);
                }
                else if (option == "4")
                {
                    stockCheck(mobileNameArray, stockArray, index);
                }
                else if (option == "5")
                {
                    deleteMobile(mobileNameArray, priceArray, stockArray, soldArray, index);
                }
                else if (option == "6")
                {
                    sellMobile(mobileNameArray, stockArray, soldArray, index);
                }
                else if (option == "7")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Option!" << endl;
                }

                cout << "Press any key to continue...";
                getch();
            }

            break;
        }
        else
        {
            cout << "Invalid Username or Password!" << endl;
            getch();
        }
    }
}

void operatorMenu(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int &index)
{
    system("cls");

    string mobileName;
    float price;
    int stock, sold;

    cin.ignore();

    cout << "Enter Mobile Name: ";
    getline(cin, mobileName);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Stock: ";
    cin >> stock;

    cout << "Enter Sold: ";
    cin >> sold;

    mobileNameArray[index] = mobileName;
    priceArray[index] = price;
    stockArray[index] = stock;
    soldArray[index] = sold;

    index++;

    cout << "Data Stored Successfully!" << endl;
    getch();
}

void viewAllMobiles(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index)
{
    cout << "Name\tPrice\tStock\tSold" << endl;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] != "")
        {
            cout << mobileNameArray[i] << "\t"
                 << priceArray[i] << "\t"
                 << stockArray[i] << "\t"
                 << soldArray[i] << endl;
        }
    }
}

void searchMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index)
{
    string mobileName;

    cin.ignore();

    cout << "Enter Mobile Name: ";
    getline(cin, mobileName);

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] == mobileName)
        {
            cout << "Name\tPrice\tStock\tSold" << endl;

            cout << mobileNameArray[i] << "\t"
                 << priceArray[i] << "\t"
                 << stockArray[i] << "\t"
                 << soldArray[i] << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "Mobile Not Found!" << endl;
    }
}

void updateMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index)
{
    string mobileName;

    cin.ignore();

    cout << "Enter Mobile Name To Update: ";
    getline(cin, mobileName);

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] == mobileName)
        {
            found = true;

            cout << "Enter New Mobile Name: ";
            getline(cin, mobileNameArray[i]);

            cout << "Enter New Price: ";
            cin >> priceArray[i];

            cout << "Enter New Stock: ";
            cin >> stockArray[i];

            cout << "Enter New Sold: ";
            cin >> soldArray[i];

            cout << "Record Updated Successfully!" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Record Not Found!" << endl;
    }
}

void stockCheck(string mobileNameArray[], int stockArray[], int index)
{
    string mobileName;

    cin.ignore();

    cout << "Enter Mobile Name: ";
    getline(cin, mobileName);

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] == mobileName)
        {
            cout << "Stock: " << stockArray[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Mobile Not Found!" << endl;
    }
}

void deleteMobile(string mobileNameArray[], float priceArray[], int stockArray[], int soldArray[], int index)
{
    string mobileName;

    cin.ignore();

    cout << "Enter Mobile Name To Delete: ";
    getline(cin, mobileName);

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] == mobileName)
        {
            mobileNameArray[i] = "";
            priceArray[i] = 0;
            stockArray[i] = 0;
            soldArray[i] = 0;

            cout << "Record Deleted Successfully!" << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Record Not Found!" << endl;
    }
}

void sellMobile(string mobileNameArray[], int stockArray[], int soldArray[], int index)
{
    string mobileName;

    cin.ignore();

    cout << "Enter Mobile Name To Sell: ";
    getline(cin, mobileName);

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (mobileNameArray[i] == mobileName)
        {
            found = true;

            if (stockArray[i] > 0)
            {
                stockArray[i]--;
                soldArray[i]++;

                cout << "Mobile Sold Successfully!" << endl;
            }
            else
            {
                cout << "Out Of Stock!" << endl;
            }

            break;
        }
    }

    if (!found)
    {
        cout << "Record Not Found!" << endl;
    }
}