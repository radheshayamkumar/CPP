#include <iostream>
using namespace std;

// 1. Specify the Class
class BankAccount {
private:
    double balance;

public:
    // Define member functions inside the class for simplicity
    void setBalance(double amount) {
        balance = amount;
    }

    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // 2. Create an Object of the class
    BankAccount myAccount; 
   

    // 3. Use the dot (.) operator to interact with the object
    myAccount.setBalance(1500.50); 
    myAccount.displayBalance();    // Output: Current Balance: $1500.5

    return 0;
}