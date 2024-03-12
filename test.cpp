#include <iostream>

using namespace std;

class NullSphereBank {
private:
    struct Account { //Lahat to mga variables and functions na magagamit pag tinawag yung Null Sphere Bank
        string first, last, middle, address, birthdate, accounttype;
        char gender;
        int pin, acnumber;
        double balance;
    };

    vector<Account> accounts;

    int generateAccountNumber() {
        return rand() % 9000000000 + 1000000000;
    }
public:
    void openaccount(); //Ibigsabihin nito na walang return value pag tinatawag siya always blank

int main() {
    int choice;

    do {
        //Null Spere Bank naisip kong name, huhu let me know if papalitan or what, Thank you!
        cout << "Null Sphere Bank\n";
        cout << "Menu:\n";
        cout << "1. Open a New Account\n";
        cout << "2. Balance Inquiry\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. View Account Information\n";
        cout << "6. Close Account\n";
        cout << "7. Exit Program\n";


        // lagay ka dito mga 2 spaces bago ito
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                cout << "Opening a new account...\n";
                
                break;
            case 2:
                cout << "Checking balance...\n";
                
                break;
            case 3:
                cout << "Depositing...\n";

                break;
            case 4:
                cout << "Withdrawing...\n";
  
                break;
            case 5:
                cout << "Viewing account information...\n";
               
                break;
            case 6:
                cout << "Closing account...\n";
               
                break;
            case 7:
                cout << "Exiting program. Goodbye!\n";

                break;
            default:

                cout << "Invalid choice. Please enter a number between 1 and 7.\n";
        }

    } while (choice != 7);

    return 0;
}


