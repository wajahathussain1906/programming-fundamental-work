#include <iostream>
using namespace std;
#include <conio.h>
int main()
{

    // Total size
    int TOTAL_MOBILES = 100;
    int index = 5;

    // data structures
    string mobileNameArray[TOTAL_MOBILES] = {"Samsung", "iPhone", "Oppo", "Vivo", "Realme"};
    float priceArray[TOTAL_MOBILES] = {50000, 100000, 30000, 25000, 20000};
    int stockArray[TOTAL_MOBILES] = {10, 5, 15, 20, 25};
    int soldArray[TOTAL_MOBILES] = {0, 0, 0, 0, 0};

    // CRUD Create. Record, Update, Delete
    while (true)
    {
        // main header of mobile shop management system
        system("cls");
        cout << "|--------------------------------------|" << endl;
        cout << "|----Mobile Shop Management System-----|" << endl;
        cout << "|--------------------------------------|" << endl;

        cout << "User menu" << endl;
        cout << "1 Admin  " << endl;
        cout << "2 Operator" << endl;
        cout << "3 Exit  " << endl;
        cout << "Choose option:" << endl;
        string UserOption;
        cin >> UserOption;
        cout << "You choose" << UserOption << endl;
        if (UserOption == "1")
        {
            // write here admin code

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "welcome to Admin menu :login attempt" << i + 1 << endl;
                cout << "Enter username" << endl;
                string username;
                cin >> username;
                cout << "Enter password " << endl;
                string password;
                cin >> password;
                if (username == "wajahat" && password == "1906")
                {
                    cout << "login successfully :";

                    while (true)
                    {
                        system("cls");
                        cout << "1 view all mobile " << endl;
                        cout << "2 search mobile " << endl;
                        cout << "3 update mobile " << endl;
                        cout << "4 stock check " << endl;
                        cout << "5 delete mobile " << endl;
                        cout << "6 sell mobile  " << endl;
                        cout << "7 logout " << endl;
                        cout << "Choose option " << endl;
                        string adminoption;
                        cin >> adminoption;
                        // show all mobile
                        if (adminoption == "1")
                        {
                            cout << "Name\tPrice\tStock\tSold" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] != "")
                                {
                                    cout << mobileNameArray[i] << "\t" << priceArray[i] << "\t" << stockArray[i] << "\t" << soldArray[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            cout << "search mobile " << endl;
                            cout << "Enter mobile name you want to search " << endl;
                            string mobileName;
                            cin.ignore();
                            getline(cin, mobileName);
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] == mobileName)
                                {
                                    foundIndex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Mobile record not found:" << mobileName << endl;
                            }
                            else
                            {
                                cout << "Name\tPrice\tStock\tSold" << endl;
                                cout << mobileNameArray[foundIndex] << "\t" << priceArray[foundIndex] << "\t" << stockArray[foundIndex] << "\t" << soldArray[foundIndex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        { // update mobile record
                            cout << "update mobile " << endl;
                            cout << "Enter mobile name you want to update " << endl;
                            string mobileName;
                            cin.ignore();
                            getline(cin, mobileName);
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] == mobileName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == true)
                            {
                                cout << "----Old record of mobile----" << endl;
                                cout << "Name\tPrice\tStock\tSold" << endl;
                                cout << mobileNameArray[foundindex] << "\t" << priceArray[foundindex] << "\t" << stockArray[foundindex] << "\t" << soldArray[foundindex] << endl;

                                cout << "Enter new details of mobile " << endl;
                                cout << "enter your mobile name :";
                                string mobilename;
                                cin.ignore();
                                getline(cin, mobilename);
                                cout << "Enter mobile price :";
                                float price;
                                cin >> price;
                                cout << "Enter mobile stock :";
                                int stock;
                                cin >> stock;
                                cout << "Enter mobile sold :";
                                int sold;
                                cin >> sold;
                                mobileNameArray[foundindex] = mobilename;
                                priceArray[foundindex] = price;
                                stockArray[foundindex] = stock;
                                soldArray[foundindex] = sold;
                            }
                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            cout << " Enter the mobile name to stock check " << endl;
                            string mobileName;
                            cin.ignore();
                            getline(cin, mobileName);
                            bool found = false;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] == mobileName)
                                {
                                    cout << mobileNameArray[i] << "\t" << stockArray[i] << endl;
                                    found = true;
                                }
                            }
                            if (!found)
                            {
                                cout << "Mobile not found" << mobileName << endl;
                            }
                        }
                        else if (adminoption == "5")
                        {
                            // delete mobile record
                            cout << "delete mobile " << endl;
                            cout << "Enter mobile name you want to delete " << endl;
                            string mobileName;
                            cin.ignore();
                            getline(cin, mobileName);
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] == mobileName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == true)
                            {
                                mobileNameArray[foundindex] = "";
                                priceArray[foundindex] = 0;
                                stockArray[foundindex] = 0;
                                soldArray[foundindex] = 0;
                                cout << "record of mobile " << mobileName << " is deleted successfully" << endl;
                            }

                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminoption == "6")
                        {
                            cout << "sell mobile " << endl;
                            cout << "Enter mobile name you want to sell " << endl;
                            string mobileName;
                            cin.ignore();
                            getline(cin, mobileName);
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (mobileNameArray[i] == mobileName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == true)
                            {
                                if (stockArray[foundindex] > 0)
                                {
                                    stockArray[foundindex] = stockArray[foundindex] - 1;
                                    soldArray[foundindex] = soldArray[foundindex] + 1;
                                    cout << "mobile " << mobileName << " is sold successfully" << endl;
                                }
                                else
                                {
                                    cout << "mobile " << mobileName << " is out of stock" << endl;
                                }
                            }

                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminoption == "7")
                        {
                            cout << "logout " << endl;
                            break;
                        }
                        else
                        {
                            cout << "you entered wrong option " << endl;
                        }
                        cout << "press any key to continue..";
                        getch();
                    }
                    cout << "Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "username or password is invalid" << endl;
                }
                cout << "press any key to conntinue";
                getch();
            }
        }
        else if (UserOption == "2")
        {
            // write here the operator code
            system("cls");
            cout << "welcome to Operator menu " << endl;
            cout << "enter your mobile name :";
            string mobilename;
            cin.ignore();
            getline(cin, mobilename);
            cout << "Enter mobile price :";
            float price;
            cin >> price;
            cout << "Enter mobile stock :";
            int stock;
            cin >> stock;
            cout << "Enter mobile sold :";
            int sold;
            cin >> sold;
            mobileNameArray[index] = mobilename;
            priceArray[index] = price;
            stockArray[index] = stock;
            soldArray[index] = sold;
            index = index + 1;
            cout << "your data is stored in our system " << endl;
            cout << "press any key to continue..";

            getch();
        }
        else if (UserOption == "3")
        {
            break;
        }
        else
        {
            cout << "you entered wrong option" << endl;
            cout << "press any key to continue..";
        }
    }

    cout << endl
         << "Thanks for using this software" << endl;
}