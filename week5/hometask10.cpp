#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n1. View Food Menu\n2. Place Order\n3. View Order Status\n4. Generate Bill\n5. Contact Staff\n6. Exit\n";
        cin >> choice;

        if (choice == 1) cout << "You selected: View Food Menu.\n";
        else if (choice == 2) cout << "You selected: Place Order.\n";
        else if (choice == 3) cout << "You selected: View Order Status.\n";
        else if (choice == 4) cout << "You selected: Generate Bill.\n";
        else if (choice == 5) cout << "You selected: Contact Staff.\n";
        else if (choice == 6) {
            cout << "Exiting Restaurant Management System. Thank you!";
            break;
        }
        else cout << "Invalid choice!\n";
    }

    return 0;
}