#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Define a structure for holding customer information
struct Customer {
    string name;
    string accountNumber;
    float balance;
};

// Function to create a new account
Customer createAccount() {
    Customer newCustomer;
    cout << "Enter customer name: ";
    cin >> newCustomer.name;
    cout << "Enter account number: ";
    cin >> newCustomer.accountNumber;
    newCustomer.balance = 0; // Open a zero balance account by default
    return newCustomer;
}

// Function to save account details to a file
void saveAccountDetails(const Customer& customer) {
    ofstream file("account_details.txt", ios::app); // Open file in append mode
    if (file.is_open()) {
        file << customer.name << " " << customer.accountNumber << " " << customer.balance << endl;
        file.close();
    } else {
        cout << "Unable to open file for saving account details." << endl;
    }
}

// Function to submit account statements to circle office
void submitAccountStatements() {
    ifstream file("account_details.txt");
    if (file.is_open()) {
        string line;
        cout << "Account statements for circle office:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file for reading account details." << endl;
    }
}

int main() {
    vector<Customer> customers;

    // Janani can create accounts for customers
    cout << "Create new accounts (Y/N): ";
    char choice;
    cin >> choice;
    while (choice == 'Y' || choice == 'y') {
        Customer newCustomer = createAccount();
        customers.push_back(newCustomer);
        saveAccountDetails(newCustomer);
        cout << "Account created successfully.\nCreate another account (Y/N): ";
        cin >> choice;
    }

    // Janani can submit account statements to circle office
    cout << "\nSubmit account statements to circle office (Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y') {
        submitAccountStatements();
    }

    return 0;
}