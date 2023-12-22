#include <iostream>
#include <map>
#include <string>
using namespace std;





void PrintMenu() {
    cout << "1. Add word \n";
    cout << "2. Delete word\n";
    cout << "3. Edit word\n";
    cout << "4. Find word\n";
    cout << "5. Exit\n";
    cout << "Choose number (1-5): ";
}

int main() {
    map<string, string> dictionary; // Использовала map для хранения слов и их значений

    int choice;
    string key, value;

    do {
        PrintMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Input word: ";
            cin >> key;
            cout << "Input translation: ";
            cin >> value;
            dictionary[key] = value;
            cout << "Word added.\n";
            break;

        case 2:
            cout << "Input word to delete: ";
            cin >> key;
            if (dictionary.erase(key) > 0) {
                cout << "Word deleted.\n";
            }
            else {
                cout << "Word is not found.\n";
            }
            break;

        case 3:
            cout << "Input word to edit: ";
            cin >> key;
            if (dictionary.find(key) != dictionary.end()) {
                cout << "Input new translation: ";
                cin >> value;
                dictionary[key] = value; 
                cout << "Word is edited.\n";
            }
            else {
                cout << "Word is not found.\n";
            }
            break;

        case 4:
            cout << "Input word to find : ";
            cin >> key;
            if (dictionary.find(key) != dictionary.end()) {
                cout << "Translation: " << dictionary[key] << endl;
            }
            else {
                cout << "Word is not found.\n";
            }
            break;

        case 5:
            cout << "Exit.\n";
            break;

        default:
            cout << "Wrong number. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}





