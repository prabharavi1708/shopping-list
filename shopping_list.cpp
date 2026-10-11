#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> shoppingList;
    int choice;
    string item;

    do {
        cout << "\n1. Add item";
        cout << "\n2. Display items";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter item: ";
            cin >> item;
            shoppingList.push_back(item);
            cout << "Item added successfully!\n";
        }
        else if (choice == 2) {
            cout << "\nShopping List:\n";
            for (int i = 0; i < shoppingList.size(); i++) {
                cout << shoppingList[i] << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
