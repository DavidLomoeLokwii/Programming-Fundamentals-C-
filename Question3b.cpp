#include <iostream>

using namespace std;

int main() {
    int balance, units;
    cout << "Enter the amount of money loaded onto your account: ";
    cin >> balance;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    double cost = 0;
    if (units <= 10) {
        cost = units * 150;
    } else if (units <= 20) {
        cost = 10 * 150 + (units - 10) * 175;
    } else {
        cost = 10 * 150 + 10 * 175 + (units - 20) * 200;
    }

    cost *= 1.15; // Apply 15% surcharge
    cost *= 1.18; // Apply 18% VAT

    if (balance >= cost) {
        balance -= cost;
        cout << "Transaction successful. Remaining balance: " << balance << endl;
    } else {
        cout << "Error: Insufficient balance. Remaining balance: " << balance << endl;
    }

    return 0;
}
